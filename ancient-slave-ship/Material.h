using namespace std;

#pragma once

#include <GL\glew.h>
#include <GL\glfw.h>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include "DoubletsAndTriplets.h"
#include "Texture.h"

class Material {
	public:
		Material();
		~Material() {}
		bool Load(string filename);
		bool Load(ifstream &inputfile);

		//Setters
		void SetName(string newname) { name = newname; }
		void SetAmbient(double r, double g, double b) { Ka.x=r; Ka.y=g; Ka.z=b; }
		void SetAmbientMap(string filename) { map_Ka=filename; }
		void SetSpecular(double r, double g, double b) { Ks.x=r; Ks.y=g; Ks.z=b; }
		void SetSpecularMap(string filename) { map_Ks=filename; }
		void SetSpecularExponent(double newNs) { Ns=newNs; }
		void SetDiffuse(double r, double g, double b) { Kd.x=r; Kd.y=g; Kd.z=b; }
		void SetDiffuseMap(string filename) { map_Kd=filename; }
		void SetEmission(double r, double g, double b) { Ke.x=r; Ke.y=g; Ke.z=b; }
		void SetEmissionMap(string filename) { map_Ke=filename; }
		void SetIlluminationModel(GLuint model) { illum = model; }
		void SetOpacity(double newTr) { Tr = newTr; }

		//Getters
		string GetName() { return name; }
		double *GetAmbient() { return Ka.xyz; }
		string GetAmbientMap() { return map_Ka; }
		double *GetSpecular() { return Ks.xyz; }
		string GetSpecularMap() { return map_Ks; }
		double GetSpecularExponent() { return Ns; }
		double *GetDiffuse() { return Kd.xyz; }
		string GetDiffuseMap() { return map_Kd; }
		double *GetEmission() { return Ke.xyz; }
		string GetEmissionMap() { return map_Ke; }
		GLuint GetIlluminationModel() { return illum; }
		double GetOpacity() { return Tr; }

		void Apply();
	protected:
		string name, map_Ka, map_Kd, map_Ks, map_Ke;
		Triplet Ka, Kd, Ks, Ke;
		GLuint illum, tex_Ka, tex_Kd, tex_Ks, tex_Ke;
		double Ns, Tr;
};
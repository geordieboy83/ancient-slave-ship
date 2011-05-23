using namespace std;

#pragma once

#include <GL\glew.h>
#include <GL\glfw.h>
#include <vector>
#include <map>
#include <string>
#include <sstream>
#include "FileBuffer.h"
#include "Material.h"
#include "DoubletsAndTriplets.h"
#include "Shape.h"

class Model {
	public:
		Model();
		Model(string filename);
		~Model();
		void Clear();
		bool Load(string filename);
	protected:
		Triplet* vertices, *textures, *normals;
		Shape* shapes;
};
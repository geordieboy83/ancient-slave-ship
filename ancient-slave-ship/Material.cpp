#include "Material.h"

Material::Material():Tr(1),Ns(0),illum(1),name(""),map_Ka(""),map_Kd(""),map_Ks(""),map_Ke("")
{
	Ka.x=0.2; Ka.y=0.2; Ka.z=0.2;
	Kd.x=0.8; Ka.y=0.8; Ka.z=0.8;
	Ks.x=1.0; Ks.y=1.0; Ks.z=1.0;
	Ke.x=1.0; Ke.y=1.0; Ke.z=1.0;
}

void Material::Apply()
{
	switch(illum){
		default: break;
	}
}

bool Material::Load(string filename)
{
	return true;
}

bool Material::Load(ifstream& filename)
{
	return true;
}
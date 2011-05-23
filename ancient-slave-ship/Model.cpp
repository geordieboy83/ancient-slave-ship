#include "Model.h"

Model::Model() : vertices(NULL), textures(NULL), normals(NULL), shapes(NULL)
{
}

Model::Model(string filename) : vertices(NULL), textures(NULL), normals(NULL), shapes(NULL)
{
	Load(filename);
}

Model::~Model()
{
	Clear();
}

void Model::Clear()
{
	if(vertices) { delete vertices; vertices=NULL; }
	if(textures) { delete textures; textures=NULL; }
	if(normals) { delete normals; normals=NULL; }
	if(shapes) { delete shapes; shapes=NULL; }
}

bool Model::Load(string filename)
{
	FileBuffer fb(filename);
	if(!fb.GetData()) return false;
	stringstream ss(fb.GetData());

	return true;
}
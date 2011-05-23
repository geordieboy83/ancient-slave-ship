using namespace std;

#pragma once

#include <GL\glew.h>
#include <GL\glfw.h>
#include <vector>
#include <map>
#include <string>
#include "Material.h"
#include "DoubletsAndTriplets.h"

class Model {
	public:
		Model();
		Model(string filename);
		~Model();
	protected:
};
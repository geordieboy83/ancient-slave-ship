using namespace std;

#pragma once

#include <fstream>
#include <string>
#include <sstream>

class FileBuffer{
	public:
		FileBuffer():data(NULL) {}
		FileBuffer(string filename);
		~FileBuffer() { if(data) delete data; }		
		char* GetData() { return data; }
		bool Load(string filename);
		void Clear() { if(data) { delete data; data=NULL; } }
	protected:
		char* data;
};

stringstream FileToStream(string filename);
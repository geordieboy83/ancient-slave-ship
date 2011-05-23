#include "FileBuffer.h"

FileBuffer::FileBuffer(string filename):data(NULL)
{
	Load(filename);
}

bool FileBuffer::Load(string filename)
{
	ifstream in(filename);
	if(!in) return false;
	Clear();
	int length;
  
	// get length of file:
	in.seekg (0, ios::end);
	length = in.tellg();
	in.seekg (0, ios::beg);
	
	// allocate memory:
	data = new char[length];

	// read data as a block:
	in.read (data,length);
	in.close();
	
	return true;
}

stringstream FileToStream(string filename)
{
	FileBuffer fb(filename); 
	if(fb.GetData()) return stringstream(fb.GetData());
	else return stringstream("");
}
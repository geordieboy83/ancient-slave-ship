using namespace std;

#include "Initialiser.h"
#include "FileBuffer.h"
#include <sstream>
#include <string>

extern bool Audio;

void main()
{
	string s;
	stringstream ss=FileToStream("../volcano/volcano.obj");
	while(ss>>s) { cout << s << endl; PAUSE }
	InitialiseAudio();
	InitialiseVideo();
	PAUSE
}
#include "Initialiser.h"

bool Audio;
bool Video;

void InitialiseAudio()
{
	cout << "Initialising Audio...\t";
	Audio=alutInit(NULL,NULL);
	if(Audio) cout << "OK" << endl;
	else cout << "FAIL" << endl;	
}

void InitialiseVideo()
{
	cout << "Initialising GLFW...\t";
	Video=glfwInit();
	if(Video) cout << "OK" << endl;
	else cout << "FAIL" << endl;	
	cout << "Initialising GLEW...\t";
	Video=glewInit();
	if(Video) cout << "OK" << endl;
	else cout << "FAIL" << endl;	
}
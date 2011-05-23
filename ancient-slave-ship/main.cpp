using namespace std;

#include <GL\glew.h>
#include "GUI\GUI.h"
#include <conio.h>
#include <iostream>

#define pause _getch();
#define PAUSE _getch();

bool Audio;

void InitialiseAudio()
{
	cout << "Initialising Audio...\t";
	Audio=alutInit(NULL,NULL);
	if(Audio) cout << "OK" << endl;
	else cout << "FAIL" << endl;	
}

void main()
{
	InitialiseAudio();
	PAUSE
}
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <glut.h>

int screenwidth = 840;
int screenheight = 680;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT); // clear the color buffer
	glClearColor(0.9f, 0.9f, 0.9f, 0.0); // set clear color to black
	glColor3f(1, 0, 0);
	glFlush(); // render the scene
}

int main(int argc, char** argv)	
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(screenwidth,screenheight);
	glutInitWindowPosition(30, 30);
	glutCreateWindow("AMIR'S FIRST OGL PROGRAM");
	glutDisplayFunc(display); // set the display callback function
	
	glutMainLoop(); // start the main glut loop
	return 0;
}

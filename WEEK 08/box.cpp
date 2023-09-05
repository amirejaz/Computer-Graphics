// Name: Amir Aijaz
// Seat No. B20102018

#include <stdlib.h>
#include "canvas.h"

#include <glut.h>
//#include <iostream>
//#include <fstream>
#include <math.h>


#define M_PI  3.14157

// display

using namespace std;

Canvas cvs(640, 480, "Test Canvas");



void display(void)
{
	cvs.setBackgroundColor(1.0, 1.0, 1.0); // Background color is white
	cvs.clearScreen(); // Clear the screen

	cvs.setColor(0.5f, 0.0f, 1.0f);
	
	cvs.setWindow(-10.0, 10.0, -10.0, 10.0);
	cvs.setViewport(10, 460, 10, 460);

	
	cvs.moveTo(-5.0, -5.0); // Move to the lower-left corner
	cvs.lineTo(5.0, -5.0);  // Draw the bottom side
	cvs.lineTo(5.0, 5.0);   // Draw the right side
	cvs.lineTo(-5.0, 5.0);  // Draw the top side
	cvs.lineTo(-5.0, -5.0); // Draw the left side

	cvs.moveTo(-4.0, -4.0); // Move to the lower-left corner
	cvs.lineTo(4.0, -4.0);  // Draw the bottom side
	cvs.lineTo(4.0, 4.0);   // Draw the right side
	cvs.lineTo(-4.0, 4.0);  // Draw the top side
	cvs.lineTo(-4.0, -4.0); // Draw the left side

	cvs.moveTo(-3.0, -3.0); // Move to the lower-left corner
	cvs.lineTo(3.0, -3.0);  // Draw the bottom side
	cvs.lineTo(3.0, 3.0);   // Draw the right side
	cvs.lineTo(-3.0, 3.0);  // Draw the top side
	cvs.lineTo(-3.0, -3.0); // Draw the left side

	cvs.moveTo(-2.0, -2.0); // Move to the lower-left corner
	cvs.lineTo(2.0, -2.0);  // Draw the bottom side
	cvs.lineTo(2.0, 2.0);   // Draw the right side
	cvs.lineTo(-2.0, 2.0);  // Draw the top side
	cvs.lineTo(-2.0, -2.0); // Draw the left side

	cvs.moveTo(-1.0, -1.0); // Move to the lower-left corner
	cvs.lineTo(1.0, -1.0);  // Draw the bottom side
	cvs.lineTo(1.0, 1.0);   // Draw the right side
	cvs.lineTo(-1.0, 1.0);  // Draw the top side
	cvs.lineTo(-1.0, -1.0); // Draw the left side

	// Drawing text as my name
	const char* text = "Amir Aijaz - B20102018"; 
	float textX = 0.0; // X-coordinate for the text position
	float textY = 8.0; // Y-coordinate for the text position

	glColor3f(0.0, 0.0, 0.0); // Set text color to black
	glRasterPos2f(textX, textY); 

	// Loop through each character in the text and display it
	for (int i = 0; text[i] != '\0'; i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
	}

	glFlush();
}


int main(int argc, char** argv)
{
	// the window is opened in the Canvas constructor
	glutDisplayFunc(display);
	glutMainLoop();
}//end main

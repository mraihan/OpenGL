#include <iostream>
#include <glut.h>
#include <stdlib.h>
#include <math.h> 

using namespace std;

void lineSegment(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(0.0, 0.0, 0.0);
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(20, 20);
	glVertex2i(20, 100);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(150, 20);
	glVertex2i(150, 100);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(20, 20);
	glVertex2i(150, 20);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(20, 100);
	glVertex2i(150, 100);
	glEnd();
	glFlush();


}
int main(int argc, char ** argv){

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Open GL");
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
	glutDisplayFunc(lineSegment);
	glutMainLoop();

}


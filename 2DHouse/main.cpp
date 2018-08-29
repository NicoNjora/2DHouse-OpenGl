# include <GL/glut.h>;
#include <math.h>

void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	//glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}
void drawHouse(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_LINE_LOOP);  //start house 
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(50, 15);

	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(50, 60);
	glVertex2i(40, 60);
	glVertex2i(40, 70);

	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(160, 70);
	glVertex2i(160, 60);
	glVertex2i(150, 60);

	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(150, 15);
	glEnd();   //end house

	glBegin(GL_LINE_LOOP);  //start window 
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(60, 50);
	glVertex2i(80, 50);
	glVertex2i(80, 35);
	glVertex2i(60, 35);
	glEnd();   //end window

	glBegin(GL_LINES);  //start partition 
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(60, 43);
	glVertex2i(80, 43);
	glEnd();   //end partition

	glBegin(GL_LINES);  //start partition 
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(70, 35);
	glVertex2i(70, 50);
	glEnd();   //end partition

	glBegin(GL_LINE_LOOP);  //start window
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(120, 50);
	glVertex2i(140, 50);

	glVertex2i(140, 35);
	glVertex2i(120, 35);
	glEnd();   //end window

	glBegin(GL_LINES);  //start partition 
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(130, 35);
	glVertex2i(130, 50);
	glEnd();   //end partition

	glBegin(GL_LINES);  //start partition 
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(120, 43);
	glVertex2i(140, 43);
	glEnd();   //end partition

	glBegin(GL_LINE_LOOP);  //start door
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(90, 15);
	glVertex2i(90, 50);
	glVertex2i(110, 50);
	glVertex2i(110, 15);
	glEnd();  //end door

	glPointSize(5.0);
	glBegin(GL_POINTS);
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(105, 33);
	glEnd();  //end knob



	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(170, 120);
	glVertex2i(150, 130);
	glEnd();

	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	for (int i = 0; i < 180; i++) {
		float theta = i * 3.142 / 180;
		float x = 40 * cosf(theta);
		float y = 40 * sinf(theta);
		glVertex2f(x + 100, y + 70);
	}
	glEnd();


	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		float theta = i * 3.142 / 180;
		float x = 7 * cosf(theta);
		float y = 7 * sinf(theta);
		glVertex2f(x + 150, y + 130);
	}
	glEnd();

	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		float theta = i * 3.142 / 180;
		float x = 7 * cosf(theta);
		float y = 7 * sinf(theta);
		glVertex2f(x + 153, y + 132);
	}
	glEnd();

	glFlush();


}


void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	//glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("2D House");
	init();
	glutDisplayFunc(drawHouse);
	glutMainLoop();


}
#include <GL/freeglut_std.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>

using namespace std;
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void lineSegment(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2i(40, 10);

        glColor3f(0.0, 1.0, 0.0);
        glVertex2i(160, 10);
        
        glColor3f(0.0, 0.0, 1.0);
        glVertex2i(100, 120);
    glEnd ();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(280, 75);
    glutInitWindowSize(800, 600);
    glutCreateWindow("A simple coloured triangle");

    init();
    glutDisplayFunc(lineSegment);
    glutMainLoop ();
}
#include <glut.h>

#include "Icosahedron.h"

using namespace std;

double rotationX = 0;
double rotationY = 0;

Icosahedron icosahedron = Icosahedron();

void CameraRotation()
{
    glLoadIdentity();

    glRotatef(rotationX, 1, 0, 0);
    glRotatef(rotationY, 0, 1, 0);
}

void WindowReshape(int width, int height)
{
    glLoadIdentity();

    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    double w = width, h = height;
    if (w > h)
    {
        glFrustum(-(w / h) * 2, (w / h) * 2, -2, 2, 1.5, 6);
    }
    else
    {
        glFrustum(-2, 2, -(h / w) * 2, (h / w) * 2, 1.5, 6);
    }
    glTranslatef(0, 0, -3.5);
    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();
}

void WindowDisplay(void)
{
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);// чтоб работало с этим, ломаются грани
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    CameraRotation();

    icosahedron.DrawIcosahedron();

    glutSwapBuffers();
}

void KeyDownHandler(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_RIGHT:
        rotationY += 5;
        break;
    case GLUT_KEY_LEFT:
        rotationY -= 5;
        break;
    case GLUT_KEY_UP:
        rotationX += 5;
        break;
    case GLUT_KEY_DOWN:
        rotationX -= 5;
        break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Icosahedron");
    glClearColor(0.2, 0.2, 0.2, 1.0); 

    glutReshapeFunc(&WindowReshape);
    glutDisplayFunc(&WindowDisplay);
    glutSpecialFunc(&KeyDownHandler);
    glutMainLoop();
}
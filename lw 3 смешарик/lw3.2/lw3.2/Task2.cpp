#define _USE_MATH_DEFINES 
#include <iostream>
#include <glut.h>
#include <windows.h>
#include <cstdlib>
#include <cmath>
#include <math.h>
#include "Owl.h"

int g_windowWidth = 800;
int g_windowHeight = 600;

// ezhik position
float x = g_windowWidth / 2;
float y = g_windowHeight / 2;

// ezhik rectangle
float top = y - 175;
float bottom = y + 115;
float left = x - 100;
float right = x + 100;

float dx = 0, dy = 0;

bool isDragging = false;

void RefreshEzhikRectangle()
{
    top = y - 175;
    bottom = y + 115;
    left = x - 100;
    right = x + 100;
}

void WindowDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    Owl owl = Owl();
    owl.SetPosition({0, 0});
    owl.Draw();
    RefreshEzhikRectangle();

    glutSwapBuffers();
    glFlush();
}

void WindowReshape(int width, int height) 
{
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity(); 
    double w = width, h = height;
    if (w > h)
        glOrtho(-2.0 * (w / (2*h)), 2.0 * (w / (2*h)), -1.3, 1.3, -1.0, 1.0); 
    else 
        glOrtho(-1, 1, -2 * (h /(1.6*w)), 2 * (h / (1.6 * w)), -1.0, 1.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void OnMouseMove(int mouseX, int mouseY)
{
    if (isDragging)
    {
        x = mouseX - dx;
        y = mouseY - dy;

        glutPostRedisplay();
    }
}

void OnMouseClick(int button, int state, int mouseX, int mouseY)
{

    if (state == GLUT_LEFT_BUTTON)
    {
        switch (button)
        {
        case GLUT_DOWN:

            if (mouseX > left && mouseX < right && mouseY > top && mouseY < bottom)
            {
                isDragging = true;

                dx = mouseX - x;
                dy = mouseY - y;
            }
        }
    }
    else
        isDragging = false;
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); 
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(500, 200); 
    glutCreateWindow("GRAPHICS");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glLoadIdentity(); 

    glutDisplayFunc(WindowDisplay);
    glutReshapeFunc(WindowReshape);
    glutMouseFunc(&OnMouseClick);
    glutMotionFunc(&OnMouseMove);
    glutMainLoop();
}


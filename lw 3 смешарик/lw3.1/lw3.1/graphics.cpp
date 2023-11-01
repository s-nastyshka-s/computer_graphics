#define _USE_MATH_DEFINES 
#include <iostream>
#include <glut.h>
#include <windows.h>
#include <cstdlib>
#include <cmath>

int width = 800;
int height = 700;
//Соотношение осей графика нужно сделать одинаковыми, тоб не расстягивался
//избавится от глобальных переменных

void DrawCoordinateAxes(float R, float G, float B, float lineWidth, float alpha) 
{
    float arrow = 0.03;
    float step = 0.05;
    int halfAxisSegmentsCount = 20; 
    float segmentationLength = 0.02;

    glLineWidth(lineWidth);
    glColor3f(R, G, B);

    glPushMatrix();
    glRotatef(alpha, 0, 0, 1);
    glBegin(GL_LINES);
        // ось
        glVertex2f(-1, 0);
        glVertex2f(1, 0);
        //половина стрелки
        glVertex2f(1, 0);
        glVertex2f(1 - arrow, 0 + arrow);
        //половина стрелки
        glVertex2f(1, 0);
        glVertex2f(1 - arrow, 0 - arrow);
        //цикл для отрисовки делений
        for (int i = -halfAxisSegmentsCount; i < halfAxisSegmentsCount; i++)
        {
            float x = i * step;
            glVertex2f(x, segmentationLength);
            glVertex2f(x, -segmentationLength);
        }
    glEnd();
    glPopMatrix();
}

void DrawFunction(float start, float finish, int count, float R, float G, float B, float lineWidth)
{
    float step = 0.05;
    float dx = (finish - start) / (count);
    glLineWidth(lineWidth);
    glColor3f(R,G,B);
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
        for (int i = 0; i < count; i++)
        {
            float x = start * step;
            float y = (2*(start * start) - 3 * start -8) * step;
            glVertex2f(x, y);
            start += dx;
        }
    glEnd();
    glPopMatrix();
}
//уменьшить количество  параметров у функции
//разделить на отдельные классы
void WindowDisplay() 
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    DrawCoordinateAxes(0.01, 0.01, 0.44, 2, 0); // ось X
    DrawCoordinateAxes(0.01, 0.01, 0.44, 2, 90); // ось Y
    DrawFunction(-2, 3, 400, 0.12, 0.56, 1, 2);

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
        glOrtho(-2.0 * (w / (2 * h)), 2.0 * (w / (2 * h)), -1.3, 1.3, -1.0, 1.0);
    else
        glOrtho(-1, 1, -2 * (h / (1.6 * w)), 2 * (h / (1.6 * w)), -1.0, 1.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char** argv) 
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); 
    glutInitWindowSize(width, height);
    glutInitWindowPosition(500, 200); 
    glutCreateWindow("GRAPHICS");

    glClearColor(0.9, 0.9, 0.98, 1); 
    glLoadIdentity();
    
    glutDisplayFunc(WindowDisplay);
    glutReshapeFunc(WindowReshape);
    glutMainLoop();
}
//разобраться с матрицей моделироваание вида
#include <glut.h>
#include <cmath>
#include <vector>

using namespace std;

const float EXTERNAL_RADIUS = 0.9;
const float INSIDE_RADIUS = 0.1;
const float STEP_Z = 0.08;
const float STEP_ANGLE = 0.15;
const vector<float> START_POSITION = { 0, 0, -0.6 };//использовать std array/point

const float DODGER_BLUE[3] = { 0.11, 0.56, 1 };//один стиль для цветов
const float Lavender[3] = { 0.9, 0.9, 0.98 };
const float Thistle[3] = { 0.84, 0.74, 0.84 };

double rotationX = 0;
double rotationY = 0;

void CameraRotation()
{
    glLoadIdentity();

    glRotatef(rotationX, 1, 0, 0);
    glRotatef(rotationY, 0, 1, 0);
}

vector<float> GetVertexHelicoid(float angle, float radius, float step)
{
    return {
        radius * cos(angle) + START_POSITION[0],
        radius * sin(angle) + START_POSITION[1],
        step * angle + START_POSITION[2]
    };
}

void DrawHelicoid()
{
    bool colorFlag = true;

    const float min = 0;
    const float max = 20;

    int count = (max - min) / STEP_ANGLE;

    float angle = 0;

    glBegin(GL_QUADS);
    for (size_t i = 0; i < count; i++)
    {
        if (colorFlag)
        {
            glColor3fv(DODGER_BLUE);
            colorFlag = !colorFlag;
        }
        else
        {
            glColor3fv(Lavender);
            colorFlag = !colorFlag;
        }

        vector<float> insidePos = GetVertexHelicoid(angle, INSIDE_RADIUS, STEP_Z);
        vector<float> externalPos = GetVertexHelicoid(angle, EXTERNAL_RADIUS, STEP_Z);

        glVertex3fv(&insidePos[0]);
        glVertex3fv(&externalPos[0]);

        angle += STEP_ANGLE;

        insidePos = GetVertexHelicoid(angle, INSIDE_RADIUS, STEP_Z);
        externalPos = GetVertexHelicoid(angle, EXTERNAL_RADIUS, STEP_Z);

        glVertex3fv(&externalPos[0]);
        glVertex3fv(&insidePos[0]);
    }
    glEnd();
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

void WindowDisplay()
{
    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    CameraRotation();
    glRotatef(90, 1, 0, 0);

    DrawHelicoid();

    glutSwapBuffers();
}

void WindowReshape(int width, int height)
{
    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    double w = width, h = height;
    if (w > h)
    {
        glFrustum(-(w / h), (w/h), -1, 1, 2, 5);
    }
    else
    {
        glFrustum(-1, 1, -(h / w), (h/w), 2, 5);
    }
    glTranslatef(0, 0, -3.5);
    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Геликоид");
    glClearColor(Thistle[0], Thistle[1], Thistle[2], 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
   
    glutReshapeFunc(WindowReshape);
    glutDisplayFunc(WindowDisplay); 
    glutSpecialFunc(&KeyDownHandler);
    glutMainLoop();
}

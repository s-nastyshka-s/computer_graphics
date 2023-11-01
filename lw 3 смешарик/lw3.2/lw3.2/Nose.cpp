#include "Nose.h"

void Nose::Draw()
{
   Ellipse nose = Ellipse({ 0, -0.027 }, { 0.075, 0.12 });
   nose.SetColor({ 0.82, 0.41, 0.12 });
   nose.Initialization();

   glColor3f(0.5, 0, 0);
   glLineWidth(2.5);
   glBegin(GL_LINE_STRIP);
   glVertex2f(-0.08, -0.009);
   glVertex2f(-0.04, 0.018);
   glVertex2f(0.015, -0.01);
   glVertex2f(0.045, -0.03);
   glVertex2f(0.075, -0.01);
   glEnd();
}
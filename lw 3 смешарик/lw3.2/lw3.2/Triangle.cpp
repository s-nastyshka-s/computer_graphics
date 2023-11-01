#pragma once
#include "Triangle.h"

Triangle::Triangle(Coordinate firstPoint, Coordinate secondPoint, Coordinate thirdPoint)
{
	m_firstPoint = firstPoint;
	m_secondPoint = secondPoint;
	m_thirdPoint = thirdPoint;
}

void Triangle::Draw()
{
	glBegin(GL_TRIANGLES);
		glVertex2f(m_firstPoint.X, m_firstPoint.Y);
		glVertex2f(m_secondPoint.X, m_secondPoint.Y);
		glVertex2f(m_thirdPoint.X, m_thirdPoint.Y);
	glEnd();
}

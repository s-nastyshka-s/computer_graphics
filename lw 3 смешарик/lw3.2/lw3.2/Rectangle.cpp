#pragma once
#include "Rectangle.h"

Rectangle::Rectangle(Coordinate firstPoint, Coordinate secondPoint, Coordinate thirdPoint, Coordinate fourthPoint)
{
	m_firstPoint = firstPoint;
	m_secondPoint = secondPoint;
	m_thirdPoint = thirdPoint;
	m_fourthPoint = fourthPoint;
}

void Rectangle::Draw()
{
	glBegin(GL_QUADS);
		glVertex2f(m_firstPoint.X, m_firstPoint.Y);
		glVertex2f(m_secondPoint.X, m_secondPoint.Y);
		glVertex2f(m_thirdPoint.X, m_thirdPoint.Y);
		glVertex2f(m_fourthPoint.X, m_fourthPoint.Y);
	glEnd();
}

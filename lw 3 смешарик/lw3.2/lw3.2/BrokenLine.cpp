#pragma once
#include "BrokenLine.h"

BrokenLine::BrokenLine(Coordinate firstPoint, Coordinate secondPoint, Coordinate thirdPoint)
{
	m_firstPoint = firstPoint;
	m_secondPoint = secondPoint;
	m_thirdPoint = thirdPoint;
}

void BrokenLine::Draw()
{
	glBegin(GL_LINE_STRIP);
		glVertex2f(m_firstPoint.X, m_firstPoint.Y);
		glVertex2f(m_secondPoint.X, m_secondPoint.Y);
		glVertex2f(m_thirdPoint.X, m_thirdPoint.Y);
	glEnd();
}

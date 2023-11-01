#define _USE_MATH_DEFINES
#include "Ellipse.h"
#include <math.h>

Ellipse::Ellipse(Coordinate center, Coordinate radius)
{
	m_center = center;
	m_radius = radius;
}

void Ellipse::Draw()
{
	const float step = float(2 * M_PI / m_points);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2d(m_center.X, m_center.Y);
		for (float angle = 0; angle < float(2 * M_PI); angle += step)
		{
			const float dx = m_radius.X * cosf(angle);
			const float dy = m_radius.Y * sinf(angle);
			glVertex2f(dx + m_center.X, dy + m_center.Y);
		}
	glEnd();
}
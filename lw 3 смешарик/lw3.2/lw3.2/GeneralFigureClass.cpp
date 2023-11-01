#pragma once
#include "GeneralFiguresClass.h"

void GeneralFigures::SetScale(float scale)
{
	m_scale = scale;
}

void GeneralFigures::SetAngle(float angle)
{
	m_angle = angle;
}

void GeneralFigures::SetPosition(Coordinate position)
{
	m_position = position;
}

void GeneralFigures::SetColor(FiguresColor color)
{
	m_color = color;
}

void GeneralFigures::SetFlipX(bool flipX)
{
	m_flipX = flipX;
}

Coordinate GeneralFigures::GetCoordinate()
{
	return m_position;
}

//константые методы
void GeneralFigures::Initialization() //непонятно почему инциализация
{
	glPushMatrix();

	if (m_flipX)
	{
		glScalef(-1, 1, 1);
	}

	glColor3f(m_color.R, m_color.G, m_color.B);
	glTranslatef(m_position.X, m_position.Y, 0);
	glScalef(m_scale, m_scale, 1);
	glRotatef(m_angle, 0, 0, 1);

	Draw(); 

	glPopMatrix();
}
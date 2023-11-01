#pragma once
#include <glut.h>

struct Coordinate 
{ 
	GLdouble X;
	GLdouble Y;
};

struct FiguresColor 
{ 
	float R; 
	float G; 
	float B; 
};

class GeneralFigures
{
public:
	void SetScale(float scale);
	void SetAngle(float angle);
	void SetPosition(Coordinate position);
	void SetColor(FiguresColor color);
	void SetFlipX(bool flipX);
	void Initialization();
	Coordinate GetCoordinate();
	virtual void Draw() = 0;

protected:
	Coordinate m_position = { 0, 0 };
	FiguresColor m_color = {0,0,0};
	float m_scale = 1;
	float m_angle = 0;
	bool m_flipX = false;
};
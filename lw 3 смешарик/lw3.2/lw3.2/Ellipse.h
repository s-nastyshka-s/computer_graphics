#pragma once

#include "GeneralFiguresClass.h"

class Ellipse : public GeneralFigures
{
public:
	Ellipse(Coordinate center, Coordinate radius);
	void Draw() override;

protected:
	int m_points = 360;
	Coordinate m_center;
	Coordinate m_radius;
};
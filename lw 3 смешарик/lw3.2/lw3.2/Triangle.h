#pragma once
#include "GeneralFiguresClass.h"
class Triangle : public GeneralFigures
{
public:
	Triangle(Coordinate firstPoint, Coordinate secondPoint, Coordinate thirdPoint);
	void Draw() override;

protected:
	Coordinate m_firstPoint, m_secondPoint, m_thirdPoint;
};
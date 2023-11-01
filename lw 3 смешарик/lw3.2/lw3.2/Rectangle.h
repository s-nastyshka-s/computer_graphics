#pragma once
#include "GeneralFiguresClass.h"
class Rectangle : public GeneralFigures
{
public:
	Rectangle(Coordinate firstPoint, Coordinate secondPoint, Coordinate thirdPoint, Coordinate fourthPoint);
	void Draw() override;

protected:
	Coordinate m_firstPoint, m_secondPoint, m_thirdPoint, m_fourthPoint;
};

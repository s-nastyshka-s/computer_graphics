#pragma once
#include "GeneralFiguresClass.h"
class BrokenLine : public GeneralFigures
{
public:
	BrokenLine(Coordinate firstPoint, Coordinate secondPoint, Coordinate thirdPoint);
	void Draw() override;

protected:
	Coordinate m_firstPoint, m_secondPoint, m_thirdPoint;
};

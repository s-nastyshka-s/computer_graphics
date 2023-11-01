#include "Hair.h"

void Hair::Draw()
{
//чёлка
    Triangle hair = Triangle({ 0, 0.065 }, { 0.3, -0.23 }, { -0.3, -0.23 });
    hair.SetColor({ 0.3, 0, 0.5 });
    hair.Initialization();

    Ellipse hair1  = Ellipse({ -0.2, 0 }, { 0.15, 0.35 });
    hair1.SetColor({ 0.3, 0, 0.5 });
    hair1.SetAngle(90);
    hair1.Initialization();
}
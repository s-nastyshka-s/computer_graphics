#include "Leg.h"

void Leg::Draw()
{
    Rectangle leg = Rectangle({ 0, -0.3 }, { 0.065, -0.3 }, { 0.065, -0.53 }, { 0, -0.53 });
    leg.SetColor({ 0.3, 0, 0.5 });
    leg.Initialization();

    Rectangle legFinger1 = Rectangle({ 0, -0.53 }, { 0.055, -0.53 }, { 0.055, -0.63 }, { 0, -0.63 });
    legFinger1.SetColor({ 0.3, 0, 0.5 });
   // legFinger1.SetAngle({20});
    legFinger1.Initialization();

    Rectangle legFinger2 = Rectangle({ -0.3, -0.45 }, { -0.25, -0.45 }, { -0.25, -0.57 }, { -0.3, -0.57 });
    legFinger2.SetColor({ 0.3, 0, 0.5 });
    legFinger2.SetAngle({ 37 });
    legFinger2.Initialization();

    Rectangle legFinger3 = Rectangle({ 0.3, -0.40 }, { 0.35, -0.40 }, { 0.35, -0.52 }, { 0.3, -0.52 });
    legFinger3.SetColor({ 0.3, 0, 0.5 });
    legFinger3.SetAngle({ -37 });
    legFinger3.Initialization();

}
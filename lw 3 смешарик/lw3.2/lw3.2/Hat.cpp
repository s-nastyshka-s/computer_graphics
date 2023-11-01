#include "Hat.h"

void Hat::Draw()
{
    Triangle hat1 = Triangle({ 0, 0.3 }, { 0.3, -0.2 }, { -0.3, -0.2 });
    hat1.SetColor({ 0.82, 0.41, 0.12 });
    hat1.Initialization();

    Triangle hat2 = Triangle({ 0, 0.3 }, { 0.2, -0.05 }, { -0.2, -0.05 });
    hat2.SetColor({ 0.5, 0, 0 });
    hat2.Initialization();

    Triangle hat3 = Triangle({ 0, 0.3 }, { 0.14, 0.07 }, { -0.14, 0.07 });
    hat3.SetColor({ 0.82, 0.41, 0.12 });
    hat3.Initialization();

    Ellipse pompon = Ellipse({ 0, 0.30 }, { 0.07, 0.1 });
    pompon.SetColor({ 0.5, 0, 0 });
    pompon.Initialization();
}
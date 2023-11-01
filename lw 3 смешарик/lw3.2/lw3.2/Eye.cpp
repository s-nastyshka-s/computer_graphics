#include "Eye.h"

void Eye::Draw()
{
    //веко
    Ellipse leftEyelid = Ellipse({ -0.07, 0.12 }, { 0.07, 0.11 });
    leftEyelid.SetColor({ 0.3, 0, 0.5 });
    leftEyelid.Initialization();

    //белый зрачок
    Ellipse leftWhitePupil = Ellipse({ -0.07, 0.09 }, { 0.07, 0.1 });
    leftWhitePupil.SetColor({ 1, 1, 1 });
    leftWhitePupil.Initialization();

    //чёрный зрачок
    Ellipse lefteBlackPupil = Ellipse({ -0.04, 0.09 }, { 0.02, 0.04 });
    lefteBlackPupil.SetColor({ 0, 0, 0 });
    lefteBlackPupil.Initialization();
}
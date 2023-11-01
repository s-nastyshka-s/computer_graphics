#include "Hand.h"
void Hand::Draw()
{
    Ellipse hand1 = Ellipse({ -0.07, 0.12 }, { 0.045, 0.15 });
    hand1.SetColor({ 0.3, 0, 0.5 });
    hand1.SetAngle({ -15 });
    hand1.Initialization();

    Ellipse hand2 = Ellipse({ -0.05, 0. }, { 0.045, 0.11 });
    hand2.SetColor({ 0.3, 0, 0.5 });
    hand2.SetAngle({ 8 });
    hand2.Initialization();

    

    
}
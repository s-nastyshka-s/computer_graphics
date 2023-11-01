#include "Ear.h"

void Ear::Draw()
{
    Triangle leftEar = Triangle({ 0, 0.3 }, { 0.3, -0.2 }, { -0.3, -0.2 });
    leftEar.SetColor({ 0.42, 0.35, 0.8 });
    leftEar.Initialization();

    Ellipse leftEarTassel1 = Ellipse({ 0, 0.35 }, { 0.03, 0.09 });
    leftEarTassel1.SetColor({ 0.3, 0, 0.5 });
    leftEarTassel1.Initialization();

    Ellipse leftEarTassel2 = Ellipse({ 0.05, 0.33 }, { 0.03, 0.09 });
    leftEarTassel2.SetColor({ 0.3, 0, 0.5 });
    leftEarTassel2.SetAngle(16);
    leftEarTassel2.Initialization();

    Ellipse leftEarTassel3 = Ellipse({ -0.05, 0.33 }, { 0.03, 0.09 });
    leftEarTassel3.SetColor({ 0.3, 0, 0.5 });
    leftEarTassel3.SetAngle(-16);
    leftEarTassel3.Initialization();
}
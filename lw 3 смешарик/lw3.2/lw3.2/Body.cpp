#include "Body.h"

void Body::Draw()
{
    Ellipse body = Ellipse({ 0, 0 }, { 0.69, 0.80 });
    body.SetColor({ 0.42, 0.35, 0.8 });
    body.Initialization();
}
#include "Owl.h"
#include "Nose.h"
#include "Hat.h"
#include "Leg.h"
#include "Hand.h"
#include "Hair.h"
#include "Eye.h"
#include "Ear.h"
#include "Body.h"

void Owl::Draw()
{
	Body body;
	body.Initialization();

	Ear ear = Ear();
	ear.SetPosition({-0.45, 0.67});
	ear.SetAngle({30});
	ear.SetScale({0.85});
	ear.Initialization();

	Ear ear2 = Ear();
	ear2.SetPosition({ -0.45, 0.67 });
	ear2.SetAngle({ 30 });
	ear2.SetScale({ 0.85 });
	ear2.SetFlipX({ true });
	ear2.Initialization();

	Eye eye = Eye();
	eye.SetScale({2});
	eye.SetPosition({-0.02, -0.02});
	eye.Initialization();

	Eye eye2 = Eye();
	eye2.SetScale({ 2 });
	eye2.SetPosition({ -0.02, -0.02 });
	eye2.SetFlipX({ true });
	eye2.Initialization();

	Nose nose = Nose();
	nose.Initialization();

	Leg leg1 = Leg();
	leg1.SetPosition({ -0.3, -0.37 });
	leg1.SetScale({ 1.15 });
	leg1.Initialization();

	Leg leg2 = Leg();
	leg2.SetPosition({ -0.3, -0.37 });
	leg2.SetScale({ 1.15 });
	leg2.SetFlipX({ true });
	leg2.Initialization();

	Hand hand1 = Hand();
	hand1.SetPosition({ -0.7, -0.2 });
	hand1.SetScale({ 1.25 });
	hand1.SetAngle({ -5 });
	hand1.Initialization();

	Hand hand2 = Hand();
	hand2.SetPosition({ -0.7, -0.2 });
	hand2.SetScale({ 1.25 });
	hand2.SetAngle({ -5 });
	hand2.SetFlipX({ true });
	hand2.Initialization();

	Hair hair = Hair();
	hair.SetAngle({180});
	hair.SetPosition({0, 0.48});
	hair.SetScale({ 0.9 });
	hair.Initialization();

	Hat hat = Hat();
	hat.SetPosition({ 0, 0.88 });
	hat.SetScale({0.85});
	hat.Initialization();
}
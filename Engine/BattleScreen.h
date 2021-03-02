#pragma once


/* This is the main battlescreen. It holds the gfx object, draws the background, creates the base, draws the score
   etc. This is the overidding display element */

#include "Graphics.h"

class BattleScreen {
public:
	void DrawScene(Graphics& gfx);
	int gunAngle = 0;
private:
	void DrawBase(Graphics& gfx);
	void DrawGun(Graphics& gfx);

};
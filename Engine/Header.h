#pragma once
#include "Graphics.h"

class GunBase {
public:
	
	void Draw(Graphics& gfx);
	
	int HP = 100;
	int gunAngle;
	
}
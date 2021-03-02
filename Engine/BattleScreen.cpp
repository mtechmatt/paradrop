#include "BattleScreen.h"
#include "Colors.h"

void BattleScreen::DrawScene(Graphics & gfx)
{
	DrawBase(gfx);
	DrawGun(gfx);
}

void BattleScreen::DrawBase(Graphics & gfx)
{
	/* This function draws the orange rectangle at the bottom of the screen for the base is
	   It is always drawn at screen width /2 (middle) and 50 pixels up from the bottom */
	gfx.DrawRectDim((gfx.ScreenWidth / 2) - 50, gfx.ScreenHeight - 30, 100, 30, { 100,100,100 });
	
}

void BattleScreen::DrawGun(Graphics & gfx)
{
	/* This function draws the gun on the base */
	/* it uses a line function */
	int gunLength = 25; //Length of the gun in pixels.
	float PI = 3.1417;
	/* first get the Start of the Gun point */
	int gunBaseX = (gfx.ScreenWidth / 2);   //middle of the screen (base)
	int gunBaseY = (gfx.ScreenHeight - 30); //Top of the Base

	/* Calculate the end points based on the gunAngle */
	/* Remember we are passed 0 to +180. 9p is vertical */
	// Sine of the angle will give us the vertical amount ie Sin 90 =1 all thje way "up"
	// CoSine will give us the Horizonal Offset
	float gunEndY = gunLength * cos(gunAngle*PI/180);
	gunEndY = gunBaseY - gunEndY;

	float gunEndX = gunLength * sin(gunAngle*PI / 180);
	gunEndX = gunEndX+(gfx.ScreenWidth / 2);

	gfx.DrawLine(gunBaseX, gunBaseY, (int)gunEndX, (int)gunEndY, { 100, 40, 100 });

	//Set the Gun Tip lcoation as this will be a spawnpoint for the bullets.
	gunTip.x = gunEndX;
	gunTip.y = gunEndY;
}

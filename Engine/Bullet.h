#pragma once
#include "Location.h"
#include "Graphics.h"
#include <math.h>

class Bullet 
{

public:
	void UpdateDraw(Graphics& gfx );			//Updates the bullet (position, impact check etc)
	void Create(Location StartingPoint, int firingAngle); //the starting point for the bullet (gun tip usually) and the firing angle to travel along

public:
	Location locBullet;		//Every bullet has a location
	bool isActive = false;  //Should this bullet be updated/displayed/travelling?  
	float velX = 0;			//Velocity in the X direction
	float velY = 0;			//Velocity in the Y direction
	int velMultiplier = 10;  //A mupltier we can mess with
};
#include "Bullet.h"

void Bullet::UpdateDraw(Graphics& gfx)
{
	/* Given that we have our starting point set, and our velicities, lets move by the amount specified. 
	    We can also use the boundary checking routine to see if we fall outside the screen and then deactivate
		ourself as a result */

	if ((locBullet.x < 5) || (locBullet.x > (gfx.ScreenWidth - 5)) || (locBullet.y < 5)) {
		isActive = false;  //Disable this bullet
	}

	/* If we are active, draw us on the screen */
	if (isActive) {
		/* Move our location (this will round to nearest (int) pixel) */
		locBullet.x += velX;
		locBullet.y += velY;

		/* Draw us on the screen */
		gfx.DrawCircle(locBullet.x, locBullet.y, 3, { 50,50,50 });

		/* Check for edge of screen */

		/* Check for collision with trooper */

		/* check for collision with any aircraft */
	}

}

void Bullet::Create(Location StartingPoint, int firingAngle)
{
	// Define our first position of the bullet.
	locBullet.x = StartingPoint.x;
	locBullet.y = StartingPoint.y;

	const float PI = 3.1417;

	//Calulate our velocities based on the firing angle
	velX = velMultiplier * sin(firingAngle*PI / 180);
	velY = velMultiplier * cos(firingAngle*PI / 180);
	velY = velY * -1; //Invert for "upwards Travel"
	// We now have our velocities as floats, ready to use in our draw functions each "step".
	isActive = true;
}

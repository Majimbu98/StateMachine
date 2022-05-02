#include "GoingDownAndShooting.h"
#include "../FlyUp/FlyUp.h"
#include "../GoingDown/GoingDown.h"
#include "../Idle/Idle.h"
#include "../ShootingOnField/ShootingOnField.h"

State* GoingDownAndShooting::PressFlyInput()
{
	return new FlyUp;
}

State* GoingDownAndShooting::PressShootInput(bool Munitions)
{
	if (Munitions)
	{
		return new GoingDownAndShooting;
	}
	else
	{
		return new GoingDown;
	}
	
}

State* GoingDownAndShooting::ReleaseFlyInput(bool Field)
{
	if (Field)
	{

		return new GoingDown;
	}
	else
	{
		return new Idle;
	}
}

State* GoingDownAndShooting::ReleaseShootInput()
{
	return new GoingDown;
}

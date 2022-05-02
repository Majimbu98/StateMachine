#include "GoingDown.h"
#include "../FlyUp/FlyUp.h"

#include "../GoingDownAndShooting/GoingDownAndShooting.h"
#include "../Idle/Idle.h"
#include "../ShootingOnField/ShootingOnField.h"

State* GoingDown::PressFlyInput()
{
	return new FlyUp;
}

State* GoingDown::PressShootInput(bool Munitions)
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

State* GoingDown::ReleaseFlyInput(bool Field)
{
	if (Field)
	{
		return new Idle;
	}
	else
	{
		return new GoingDown;
	}
}

State* GoingDown::ReleaseShootInput()
{
	return new GoingDown;
}

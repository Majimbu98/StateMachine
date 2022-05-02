#include "FlyUp.h"
#include "../GoingDown/GoingDown.h"
#include "../GoingDownAndShooting/GoingDownAndShooting.h"
#include "../Idle/Idle.h"
#include "../ShootingOnField/ShootingOnField.h"

State* FlyUp::PressFlyInput()
{
	return new FlyUp;
}

State* FlyUp::PressShootInput(bool Munitions)
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

State* FlyUp::ReleaseFlyInput(bool Field)
{
	return new GoingDown;
}

State* FlyUp::ReleaseShootInput()
{
	return new FlyUp;
}

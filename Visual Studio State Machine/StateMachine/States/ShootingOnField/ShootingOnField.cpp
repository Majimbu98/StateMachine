#include "ShootingOnField.h"
#include "../FlyUp/FlyUp.h"
#include "../Idle/Idle.h"


State* ShootingOnField::PressFlyInput()
{
	return new FlyUp;
}

State* ShootingOnField::PressShootInput(bool Munitions)
{
	if (Munitions)
	{
		return new ShootingOnField;
	}
	else
	{
		return new Idle;
	}
	
}

State* ShootingOnField::ReleaseFlyInput(bool Field)
{
	return new Idle;
}

State* ShootingOnField::ReleaseShootInput()
{
	return new Idle;
}

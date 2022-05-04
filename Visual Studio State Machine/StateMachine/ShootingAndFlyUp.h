#pragma once
#include "States\State\State.h"

class ShootingAndFlyUp : public State 
{
	public:
	virtual State* UpdateState(Context* context, InputEnum input) override
	{
		State::UpdateState(context, input);

		m_Context->FlyUp();

		bool no_ammo = m_Context->Shoot();

		if ( input == InputEnum::GoUp )
		{
			if (input == InputEnum::StartShoot)
				return this;
			
			return new FlyUp();
		}
		else
		{
			if (input == InputEnum::StartShoot)
				return new GoingDownAndShooting();

			return new GoingDown();
		}
	}
};
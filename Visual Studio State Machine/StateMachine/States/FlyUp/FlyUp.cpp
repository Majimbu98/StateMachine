#include "FlyUp.h"
#include "../GoingDown/GoingDown.h"
#include "../GoingDownAndShooting/GoingDownAndShooting.h"
#include "../Idle/Idle.h"
#include "../ShootingOnField/ShootingOnField.h"
#include "..\..\ShootingAndFlyUp.h"

State* FlyUp::UpdateState(Context* context, InputEnum input)
{
	State::UpdateState(context, input);

	m_Context->FlyUp();

	if (input == InputEnum::GoUp) {
		if (input == InputEnum::StartShoot) {
			return new ShootingAndFlyUp();
		}
		return this;
	}

	return new GoingDown();
}
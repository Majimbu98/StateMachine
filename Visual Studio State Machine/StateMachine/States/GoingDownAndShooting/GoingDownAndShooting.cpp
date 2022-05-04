#include "GoingDownAndShooting.h"
#include "../../ShootingAndFlyUp.h"
#include "../FlyUp/FlyUp.h"
#include "../GoingDown/GoingDown.h"
#include "../Idle/Idle.h"
#include "../ShootingOnField/ShootingOnField.h"


State* GoingDownAndShooting::UpdateState(Context* context, InputEnum input)
{
	State::UpdateState(context, input);


	m_Context->GoingDown();
	bool no_ammo = m_Context->Shoot();

	if (input == InputEnum::StartShoot)
		return this;

	if (input == InputEnum::GoUp)
		return new ShootingAndFlyUp();

	
	return new GoingDownAndShooting();

}

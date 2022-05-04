#include "GoingDown.h"
#include "../FlyUp/FlyUp.h"

#include "../GoingDownAndShooting/GoingDownAndShooting.h"
#include "../Idle/Idle.h"
#include "../ShootingOnField/ShootingOnField.h"


State* GoingDown::UpdateState(Context* context, InputEnum input)
{
	State::UpdateState(context, input);

	m_Context->GoingDown();
	
	if (m_Context->IsLanded())
		return new Idle();

	if (input == InputEnum::StartShoot)
		return new GoingDownAndShooting();


	return this;
}
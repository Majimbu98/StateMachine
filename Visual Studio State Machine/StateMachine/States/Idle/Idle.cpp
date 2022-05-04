#include "Idle.h"
#include "../../Context.h"
#include "../FlyUp/FlyUp.h"
#include "../GoingDown/GoingDown.h"
#include "../GoingDownAndShooting/GoingDownAndShooting.h"
#include "../ShootingOnField/ShootingOnField.h"


State*  Idle::UpdateState(Context * context, InputEnum input)
{
    State::UpdateState(context, input);

    if (input == InputEnum::GoUp)
        return GotoFlyState();

    if (input == StartShoot)
        return GotoShootState();

    return this;
}

State* Idle::GotoShootState()
{
    if (m_Context->CheckMunitions())
    {
        return new ShootingOnField();
    }
    else
        return new Idle();
}

State* Idle::GotoFlyState()
{
    return new FlyUp();
}


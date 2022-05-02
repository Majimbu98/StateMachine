#include "Idle.h"
#include "../FlyUp/FlyUp.h"
#include "../GoingDown/GoingDown.h"
#include "../GoingDownAndShooting/GoingDownAndShooting.h"
#include "../ShootingOnField/ShootingOnField.h"

State* Idle::PressFlyInput()
{
    return new FlyUp;
}


State* Idle::PressShootInput(bool Munitions)
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


State* Idle::ReleaseFlyInput(bool Field)
{
    return new Idle;
}

State* Idle::ReleaseShootInput()
{
    return new Idle;
}

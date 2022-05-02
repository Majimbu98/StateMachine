#include "../../States/State/State.h"

class GoingDownAndShooting : public State
{
public:

	State* PressFlyInput()override;
	State* PressShootInput(bool Munitions)override;
	State* ReleaseFlyInput(bool Field)override;
	State* ReleaseShootInput()override;
};

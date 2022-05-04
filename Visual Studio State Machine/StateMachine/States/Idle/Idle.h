#include "../../States/State/State.h"

class Idle : public State
{
private:
		State* GotoShootState();
		State* GotoFlyState();

public:
	virtual State* UpdateState(Context *, InputEnum)override;
};


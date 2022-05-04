#include "../../States/State/State.h"

class FlyUp : public State
{


public:
	virtual State* UpdateState(Context*, InputEnum)override;
};

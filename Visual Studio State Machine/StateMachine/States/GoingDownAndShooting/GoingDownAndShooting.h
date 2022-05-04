#include "../../States/State/State.h"

class GoingDownAndShooting : public State
{
public:
	virtual State* UpdateState(Context*, InputEnum)override;
};

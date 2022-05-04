#include "../../States/State/State.h"

class GoingDown : public State
{
public:

	virtual State* UpdateState(Context*, InputEnum)override;
};

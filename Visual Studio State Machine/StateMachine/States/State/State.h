#pragma once
#include "..\..\Context.h"
#include "..\..\GameManager\GameManager.h"

class State {
protected:
	Context* m_Context;

public:
	virtual State* UpdateState(Context* context, InputEnum)
	{
		m_Context = context;
	}
};
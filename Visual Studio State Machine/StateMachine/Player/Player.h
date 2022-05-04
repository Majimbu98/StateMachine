#pragma once
#include "../States/State/State.h"

class Player
{
private:
	Context* m_Context;

public:

	Player();

	int XPosition;
	int YPosition;
	int ZPosition;
	int Munitions;

	State* CurrentState;

	void Update(InputEnum input);

};


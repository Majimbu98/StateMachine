#pragma once
#include "../States/State/State.h"

class Player
{
public:

	Player();

	int XPosition;
	int YPosition;
	int ZPosition;
	int Munitions;

	State* My_State;

	void ChangeState(State* New_State);

};


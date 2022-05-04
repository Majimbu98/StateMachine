#include "Player.h"
#include "../States/Idle/Idle.h"

Player::Player()
{
	this->XPosition = 0;
	this->YPosition = 0;
	this->ZPosition = 0;
	this->Munitions = 10;

	this->CurrentState = new Idle();
}

void Player::Update(InputEnum input)
{
	State* new_state  = CurrentState->UpdateState(m_Context, input);

	if (CurrentState != new_state)
		delete CurrentState;

	CurrentState = new_state;
}
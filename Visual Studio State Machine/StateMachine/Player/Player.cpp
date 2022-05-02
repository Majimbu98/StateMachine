#include "Player.h"
#include "../States/Idle/Idle.h"

Player::Player()
{
	this->XPosition = 0;
	this->YPosition = 0;
	this->ZPosition = 0;
	this->Munitions = 10;
	this->My_State = new Idle;
}

void Player::ChangeState(State* New_State)
{

	My_State = New_State;
}


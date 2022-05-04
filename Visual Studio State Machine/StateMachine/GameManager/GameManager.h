#pragma once
#include "../StatusManager/StatusManager.h"

enum InputEnum
{
	NoInput = 'x',
	GoUp = 'w',
	GoDown = 's',
	StartShoot = 'a',
	FinishShoot = 'b',
};

class GameManager
{
public:
	Player* Player;
	InputEnum Input;

public:
	GameManager();
	~GameManager();

	void Start();
	void ProcessInput();
	void Update();
	void Render();
};


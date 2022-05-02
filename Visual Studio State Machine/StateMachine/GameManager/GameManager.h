#pragma once
#include "../StatusManager/StatusManager.h"

class GameManager
{
public:
	Player Test;
	char Input;

	enum Input
	{
		GoUp = 'w',
		GoDown = 's',
		StartShoot = 'a',
		FinishShoot = !('a'),
	};

	GameManager();
	~GameManager();

	void Start();
	void ProcessInput();
	void Update();
	void Render();
};


#include "GameManager.h"
#include <iostream>
using namespace std;

GameManager::GameManager()
{
	this->Input = InputEnum::NoInput;
	Context = new Context();
}

GameManager::~GameManager()
{
}

void GameManager::Start()
{
	//GameLoop
	while (true)
	{
		ProcessInput();
		Update();
		Render();
	}
}

void GameManager::ProcessInput()
{
		char MyInput;
		cin >> MyInput;

		switch (MyInput)
		{
		case 'w': Input = InputEnum::GoUp; break;
		case 's': Input = InputEnum::GoDown; break;
		case 'a': Input = InputEnum::StartShoot; break;
		case 'b': Input = InputEnum::FinishShoot; break;
		};
}

void GameManager::Update()
{
	Player->Update(Input);
}

void GameManager::Render()
{
	cout << "X: " << this->Test.XPosition<<endl;
	cout << "Y: " << this->Test.YPosition << endl;
	cout << "Z: " << this->Test.ZPosition << endl;
	cout << endl;
	cout << "Munitions: " << this->Test.Munitions << endl<<endl;
}

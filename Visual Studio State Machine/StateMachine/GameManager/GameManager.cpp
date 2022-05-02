#include "GameManager.h"
#include <iostream>
using namespace std;

GameManager::GameManager()
{
	this->Input = 0;
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
	this->Input = MyInput;
}

void GameManager::Update()
{
	
	switch (this->Input)
	{
	case StartShoot:
		Test.ChangeState(Test.My_State->PressShootInput(StatusManager::UseMunitions(Test)));
		break;
	case GoUp:
		StatusManager::GoUp(Test);
		StatusManager::GoUp(Test);
		Test.ChangeState(Test.My_State->PressFlyInput());
	case GoDown:
		StatusManager::GoDown(Test);
		Test.ChangeState(Test.My_State->ReleaseFlyInput(StatusManager::IsOnField(Test)));
	case FinishShoot:
		Test.ChangeState(Test.My_State->ReleaseShootInput());
	}


}

void GameManager::Render()
{
	cout << "X: " << this->Test.XPosition<<endl;
	cout << "Y: " << this->Test.YPosition << endl;
	cout << "Z: " << this->Test.ZPosition << endl;
	cout << endl;
	cout << "Munitions: " << this->Test.Munitions << endl<<endl;
}

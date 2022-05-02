#include "StatusManager.h"

bool StatusManager::IsOnField(Player &MyPlayer)
{
	if (MyPlayer.ZPosition == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool StatusManager::UseMunitions(Player &MyPlayer)
{
	if (MyPlayer.Munitions > 0)
	{
		MyPlayer.Munitions = MyPlayer.Munitions - 1;
		return true;
	}
	else
	{
		return false;
	}
}

void StatusManager::GoUp(Player &MyPlayer)
{
	MyPlayer.ZPosition = MyPlayer.ZPosition + 1;
}

void StatusManager::GoDown(Player &MyPlayer)
{
	MyPlayer.ZPosition = MyPlayer.ZPosition - 1;
}

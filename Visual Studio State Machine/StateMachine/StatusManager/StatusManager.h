#include "../Player/Player.h"
#pragma once
class StatusManager
{
public:

	static bool IsOnField(Player &MyPlayer);
	static bool UseMunitions(Player &MyPlayer);
	static bool CheckMunitions(Player& MyPlayer);
	static void GoUp(Player &MyPlayer);
	static void GoDown(Player &MyPlayer);
};


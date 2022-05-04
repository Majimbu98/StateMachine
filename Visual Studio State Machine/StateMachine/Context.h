#pragma once
#include "Player\Player.h"
#include "StatusManager\StatusManager.h"

class Context {

private:
	StatusManager* m_StatusManager;
	Player* m_Player;


	//istanziato gli stati
	 
	
	//istanza al player
public:

	void FlyUp() 
	{
		///set player altitude
		m_StatusManager->GoUp(*m_Player);
	}

	bool CheckMunitions() 
	{
		//get from player if available ammo
		return m_StatusManager->UseMunitions(*m_Player);
	}

	bool IsLanded() 
	{
		//get from player if is grounded
		return m_StatusManager->IsOnField(*m_Player);
	}

	void GoingDown()
	{
		return m_StatusManager->GoDown(*m_Player);
	}

	bool Shoot()
	{
		return m_StatusManager->UseMunitions(*m_Player);
	}
};

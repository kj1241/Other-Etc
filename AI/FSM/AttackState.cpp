#include "stdafx.h"

AttackState::AttackState():pMonster(nullptr), pPlayer(nullptr), wCurrentHP(0), pState(nullptr)
{
}

AttackState::~AttackState()
{
}

void AttackState::Enter(Entity * entity)
{
	cout << "�÷��̾ ���͸� �����մϴ�." << endl;
}

void AttackState::Execute(Entity * entity)
{
	if (NULL == entity)
		return;

	pPlayer = (Player*)entity;
	pMonster = (Monster*)pPlayer->GetEnemy();
	if (NULL == pMonster)
		return;

	wCurrentHP = pMonster->GetHP();
	pMonster->SetHP(--wCurrentHP);

	if (wCurrentHP >= 1)
	{
		pMonster->SetHP(wCurrentHP);
		cout << "�÷��̾ ���� ����. ���� ���� hp:" << wCurrentHP << endl;
	}
	else
	{
		pMonster->MonsterDead();
		pState = pPlayer->GetState(Return);
		if (NULL == pState)
			return;

		pPlayer->SetState(pState);
		pState->Enter(pPlayer);
	}
}

void AttackState::Exit(Entity * entity)
{
}

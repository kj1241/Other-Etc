#include "stdafx.h"

Monster::Monster()
{
	//��ġ, hp
	X = 3;
	Y = 3;
	wHP = 5;
}

Monster::~Monster()
{
}

void Monster::MonsterDead()
{
	cout << "���Ͱ� ����~!" << endl;
}

#include "stdafx.h"

//���η���
void main()
{
	Player* pPlayer = new Player(); //�÷��̾�
	Monster* pMonster = new Monster(); //����
	pPlayer->SetEnemy(pPlayer); 

	//������Ʈ
	while (true)
	{
		pPlayer->Update(); //�÷��̾� ������Ʈ
		Sleep(500);
	}
	
}
#ifndef ATTACKSTATE_H
#define ATTACKSTATE_H

//�÷��̾�
class Player;

//���� �ܰ�
class AttackState : public State
{
private:
	Monster * pMonster;
	Player* pPlayer;

	WORD wCurrentHP;
	State* pState;
	
public:
	AttackState();
	~AttackState();

	void Enter(Entity* entity);
	void Execute(Entity* entity);
	void Exit(Entity* entity);
};


#endif
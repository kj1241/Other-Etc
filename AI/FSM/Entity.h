#ifndef ENTITIY_H
#define ENTITIY_H


//���
class Entity
{
protected:
	WORD wID;
	WORD wNextValueID;

	WORD wHP;
	int X;
	int Y;

public:
	Entity();
	~Entity();

	void SetID(WORD wID);

	WORD GetHP();
	void SetHP(WORD wHP);
	int GetX();
	void SetX(int x);
	int GetY();
	void SetY(int y);


};


#endif
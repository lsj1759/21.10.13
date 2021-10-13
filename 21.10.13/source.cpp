#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Character 
{
public:
	Character()
	{
		cout << "Character ����" << endl;
	}
	virtual ~Character()
	{
		cout << "Character �ı�" << endl;
	}

	virtual void Move() = 0; // ���� ���� �Լ�, �������̽�, �ٷλ��� , ��� �Ŀ� ����

private:


	int Gold = 50;
	int HP = 100;
	int MP = 50;
};

class APlayer : public Character
{
public:
	APlayer()
	{
		cout << "Player ����" << endl;
	}
	~APlayer()
	{
		cout << "Player ����" << endl;
	}
	virtual void Move() override
	{
		cout << "Player �̵�" << endl;
	}

};


class AMonster : public Character
{
public:
	AMonster()
	{
		cout << "Monster ����" << endl;
	}
	virtual ~AMonster()
	{
		cout << "Monster �ı�" << endl;
	}

	virtual void Move() override
	{
		cout << "Monster �̵�" << endl;
	}

private:

	int HP = 50;
	int MP = 50;
};

class Goblin : public AMonster
{
public:
	Goblin()
	{
		cout << "Goblin ����" << endl;
	}
	virtual ~Goblin()
	{
		cout << "Goblin �ı�" << endl;
	}
	virtual void Move() override
	{
		cout << "Goblin �̵�" << endl;
	}


};

class Slime : public AMonster
{
public:
	Slime()
	{
		cout << "Slime ����" << endl;
	}
	virtual ~Slime()
	{
		cout << "Slime �ı�" << endl;
	}

	virtual void Move() override
	{
		cout << "Slime �̵�" << endl;
	};

};

class Wildpig : public AMonster
{
public:
	Wildpig()
	{
		cout << "Wildpig ����" << endl;
	}
	virtual ~Wildpig()
	{
		cout << "Wildpig �ı�" << endl;
	}

	virtual void Move() override
	{
		cout << "Wildpig �̵�" << endl;
	}
	
};

int main()
{
	vector<Character*> Characters;
	
	Characters.push_back(new APlayer());
	
	srand(time(nullptr));

	for (int i = 0; i < 10; ++i)
	{
		int Type = rand() % 3;
		if (Type == 0)
		{
			Characters.push_back(new Goblin());
		}
		else if (Type == 1)
		{
			Characters.push_back(new Slime());
		}
		else if (Type == 2)
		{
			Characters.push_back(new Wildpig());
		}
	}
	
	for (size_t i = 0; i < Characters.size(); ++i)
	{
		Characters[i]->Move();
	}
	for (auto PlayCharacter : Characters)
	{
		PlayCharacter->Move();
	}

	for (auto iter = Characters.begin(); iter != Characters.end(); ++iter)
	{
		(*iter)->Move();
	}
	//Character* character = new APlayer;
	//
	//Character* goblin = new Goblin();

	//delete goblin;

	return 0;
}
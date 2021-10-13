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
		cout << "Character 생성" << endl;
	}
	virtual ~Character()
	{
		cout << "Character 파괴" << endl;
	}

	virtual void Move() = 0; // 순수 가상 함수, 인터페이스, 바로생성 , 상속 후에 생성

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
		cout << "Player 생성" << endl;
	}
	~APlayer()
	{
		cout << "Player 생성" << endl;
	}
	virtual void Move() override
	{
		cout << "Player 이동" << endl;
	}

};


class AMonster : public Character
{
public:
	AMonster()
	{
		cout << "Monster 생성" << endl;
	}
	virtual ~AMonster()
	{
		cout << "Monster 파괴" << endl;
	}

	virtual void Move() override
	{
		cout << "Monster 이동" << endl;
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
		cout << "Goblin 생성" << endl;
	}
	virtual ~Goblin()
	{
		cout << "Goblin 파괴" << endl;
	}
	virtual void Move() override
	{
		cout << "Goblin 이동" << endl;
	}


};

class Slime : public AMonster
{
public:
	Slime()
	{
		cout << "Slime 생성" << endl;
	}
	virtual ~Slime()
	{
		cout << "Slime 파괴" << endl;
	}

	virtual void Move() override
	{
		cout << "Slime 이동" << endl;
	};

};

class Wildpig : public AMonster
{
public:
	Wildpig()
	{
		cout << "Wildpig 생성" << endl;
	}
	virtual ~Wildpig()
	{
		cout << "Wildpig 파괴" << endl;
	}

	virtual void Move() override
	{
		cout << "Wildpig 이동" << endl;
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
#include <iostream>

using namespace std;

class Character 
{
public:
	Character()
	{
		cout << "Character 积己" << endl;
	}
	virtual ~Character()
	{
		cout << "Character 颇鲍" << endl;
	}

	virtual void Move() = 0;

private:
	virtual void Move();
	virtual void Attack();

	int Gold = 50;
	int HP = 100;
	int MP = 50;
};

class APlayer : public Character
{
public:
	APlayer()
	{
		cout << "Player 积己" << endl;
	}
	~APlayer()
	{
		cout << "Player 积己" << endl;
	}
	virtual void Move() override
	{

	}
	void Attack() override;
};


class AMonster : public Character
{
public:
	AMonster()
	{
		cout << "Monster 积己" << endl;
	}
	virtual ~AMonster()
	{
		cout << "Monster 颇鲍" << endl;
	}

	virtual void Move() override
	{

	}

private:
	virtual void Move();
	virtual void Attack();
	virtual void Run();

	int HP = 50;
	int MP = 50;
};

class Goblin : public AMonster
{
public:
	Goblin()
	{
		cout << "Goblin 积己" << endl;
	}
	virtual ~Goblin()
	{
		cout << "Goblin 颇鲍" << endl;
	}
	void Move() override;
	void Attack() override;
	void Run() override;
};

class Slime : AMonster
{
public:
	Slime()
	{
		cout << "Slime 积己" << endl;
	}
	virtual ~Slime()
	{
		cout << "Slime 颇鲍" << endl;
	}

	void Move() override;
	void Attack() override;
	void Run() override;
};

class Wildpig : AMonster
{
	Wildpig()
	{
		cout << "Wildpig 积己" << endl;
	}
	virtual ~Wildpig()
	{
		cout << "Wildpig 颇鲍" << endl;
	}

	void Move() override;
	void Attack() override;
	void Run() override;
};

int main()
{
	Character* character = new APlayer;
	
	Character* goblin = new Goblin();

	delete goblin;

	return 0;
}
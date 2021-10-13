#include <iostream>

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
		cout << "Player ����" << endl;
	}
	~APlayer()
	{
		cout << "Player ����" << endl;
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
		cout << "Monster ����" << endl;
	}
	virtual ~AMonster()
	{
		cout << "Monster �ı�" << endl;
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
		cout << "Goblin ����" << endl;
	}
	virtual ~Goblin()
	{
		cout << "Goblin �ı�" << endl;
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
		cout << "Slime ����" << endl;
	}
	virtual ~Slime()
	{
		cout << "Slime �ı�" << endl;
	}

	void Move() override;
	void Attack() override;
	void Run() override;
};

class Wildpig : AMonster
{
	Wildpig()
	{
		cout << "Wildpig ����" << endl;
	}
	virtual ~Wildpig()
	{
		cout << "Wildpig �ı�" << endl;
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
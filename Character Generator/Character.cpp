#include "Character.h"

using namespace std;

Character::Character()
{
	
}
Character::Character(std::string N, int H)
{
	name = N;
	health = H;
}
Character::~Character()
{

}

string Character::getName()
{
	return name;
}
void Character::setName(string newName)
{
	name = newName;
}

int Character::getHealth()
{
	return health;
}
void Character::setHealth(int newHealth)
{
	if (newHealth > 0)
	{
		health = newHealth;
	}
	else
	{
		cout << "A character's health can't be less than 1.";
	}
}

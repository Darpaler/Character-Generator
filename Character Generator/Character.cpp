/*
  This file contains all methods for Character, Goblin, and Joblin
*/
#include <iostream>
#include <iomanip>
#include "Character.h"

using namespace std;

//Character

//Constructors
Character::Character()	//Default
{
	
}

Character::Character(std::string N, int H)	//With Parameters
{
	name = N;
	if (H > 0)
	{
		health = H;
	}
	else
	{
		cout << "A character's health can't be less than 1." << endl;
	}
}

//Destructor
Character::~Character()
{

}

//Getters and Setters
string Character::getName()
{
	return name;
}
void Character::setName(string N)
{
	name = N;
}

int Character::getHealth()
{
	return health;
}
void Character::setHealth(int H)
{
	if (H > 0)
	{
		health = H;
	}
	else
	{
		cout << "A character's health can't be less than 1.";
	}
}

//Display
void Character::display() 
{
	cout << name << " the Character" << "\nHealth: " << health << endl;
}

//Goblin

//Constructors
Goblin::Goblin()	//Default
{

}

Goblin::Goblin(std::string N, int H, int M, int C)	//With Parameters
{
	name = N;
	if (H > 0)
	{
		health = H;
	}
	else
	{
		cout << "A character's health can't be less than 1." << endl;
	}
	mischief = M;
	combatStrength = C;
}

//Destructor
Goblin::~Goblin()
{

}

//Getters and Setters
int Goblin::getMischief()
{
	return mischief;
}
void Goblin::setMischief(int M) 
{
	mischief = M;
}

int Goblin::getCombatStrength()
{
	return combatStrength;
}
void Goblin::setCombatStrength(int C)
{
	combatStrength = C;
}

//Display
void Goblin::display()
{
	cout << name << " the Goblin" << "\nHealth: " << health << endl;
	cout << "Likelihood of Mischief: " << mischief << "\nCombat Strength: " << combatStrength << endl;
}

void Goblin::display(bool details)
{
	if (details)
	{
		cout << name << " the Goblin" << "\nHealth: " << health << endl
			 << "Likelihood of Mischief: " << mischief << "\nCombat Strength: " << combatStrength << endl;
	}
	else
	{
		cout << "A Goblin\n" << "Stats Unknown" << endl;
	}
}


//Joblin

//Constructors
Joblin::Joblin()	//Default
{

}

Joblin::Joblin(std::string N, int H, string B, int A)	//With Parameters
{
	name = N;
	if (H > 0)
	{
		health = H;
	}
	else
	{
		cout << "A character's health can't be less than 1." << endl;
	}
	businessAttire = B;
	assertation = A;
}

//Destructor
Joblin::~Joblin()
{

}

//Getters and Setters
string Joblin::getBusinessAttire()
{
	return businessAttire;
}
void Joblin::setBusinessAttire(string B)
{
	businessAttire = B;
}

int Joblin::getAssertation()
{
	return assertation;
}
void Joblin::setAssertation(int A)
{
	assertation = A;
}

//Display
void Joblin::display()
{
	cout << name << " the Joblin" << "\nHealth: " << health << endl;
	cout << "Business Attire: " << businessAttire << "\nAssertive Demeanor: " << assertation << endl;
}
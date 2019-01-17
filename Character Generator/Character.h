#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

class Character {
public:
	Character();
	Character(std::string N, int H);
	~Character();
	
	void setName(string newName);
	string getName();

	void setHealth(int newHealth);
	int getHealth();

protected:
	string name;
	int health;
};

class Zombie : public Character
{
public:
	Zombie();
	~Zombie();

};
#endif

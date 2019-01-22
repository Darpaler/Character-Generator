/*
   This header file provides definition of class Character (parent)
   Goblin (child) and Joblin (child).
*/
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
	
	void setName(string N);
	string getName();

	void setHealth(int H);
	int getHealth();

	void display();

protected:
	string name;
	int health = 1;
};

class Goblin : public Character
{
public:
	Goblin();
	Goblin(string N, int H, int M, int C);
	~Goblin();

	int getMischief();
	void setMischief(int M);
	
	int getCombatStrength();
	void setCombatStrength(int C);
	
	void display();
	void display(bool details);

private:
	int mischief;
	int combatStrength;

};

class Joblin : public Character
{
public:
	Joblin();
	Joblin(string N, int H, string B, int A);
	~Joblin();
	
	string getBusinessAttire();
	void setBusinessAttire(string B);
	
	int getAssertation();
	void setAssertation(int A);
	
	void display();

private:
	string businessAttire;
	int assertation;

};
#endif

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
	//Constructors and Destructors
	Character();						//Default Constructor
	Character(std::string N, int H);	//Constructor with Parameters
	~Character();						//Destructor

	//Getters and Setters
	void setName(string N);
	string getName();

	void setHealth(int H);
	int getHealth();

	//Display
	void display();

protected:
	string name;		//The Character's Name
	int health = 1;		//The Character's Health
};

class Goblin : public Character
{
public:
	//Constructors and Destructors
	Goblin();								//Default Constructor
	Goblin(string N, int H, int M, int C);	//Constructor with Parameters
	~Goblin();								//Destructor

	//Getters and Setters
	int getMischief();
	void setMischief(int M);
	
	int getCombatStrength();
	void setCombatStrength(int C);

	//Display
	void display();					//Default Display
	void display(bool details);		//Display with Polymorphism

private:
	int mischief;			//The Character's Tendency Towards Mischief
	int combatStrength;		//The Character's Combat Strength

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
	void display(bool details);

private:
	string businessAttire;
	int assertation;

};
#endif

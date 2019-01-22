/*
  Main program to test Character, Goblin and Joblin
*/
#include <iostream>
#include <iomanip>
#include "Character.h"
using namespace std;

void main()
{
	//Characters
	cout << "Default Character:\n";
	Character character1;							//Default Character
	character1.display();
	cout << endl;

	cout << "Character with Parameters:\n";
	Character character2 = Character("Bob", 10);	//Character with Parameters
	character2.display();
	cout << endl;

	cout << "Character with Negative Health:\n";
	Character character3 = Character("Joe", -10);	//Character with Negative Health
	character3.display();
	cout << endl;

	//Goblins
	cout << "Goblin:\n";
	Goblin goblin1 = Goblin("Uknorm", 8, 16, 12);	//Default Goblin
	goblin1.display();
	cout << endl;

	cout << "Goblin With Polymorphism (false):\n";
	Goblin goblin2 = Goblin("Julb", -8, 17, 11);	//Goblin With Polymorphism (false)
	goblin2.display(false);
	cout << endl;

	cout << "Goblin With Polymorphism (true):\n";	//Goblin With Polymorphism (true)
	goblin2.display(true);
	cout << endl;

	//Joblin
	cout << "Joblin:\n";
	Joblin joblin1 = Joblin("Mr. Smythe", 5, "Grey Structured Suit and a Maroon Spotted Tie", 18);
	joblin1.display();

	system("pause");
}
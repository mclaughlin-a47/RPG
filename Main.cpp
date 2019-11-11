//Description: adventure game including a wizard,warrior archer
//Author: Aaron Mclaughlin
//Date: 10/10/2019

using namespace std;

#include <iostream>
#include <string>
#include "RPG.h"
#include "Archer.h"
#include "Warrior.h"
#include "Weapon.h"
#include "Wizard.h"

int main(){
	string name;
	string charactertype;
	int health;
	int level;
	string weapon;

	cout << choose which character type(wizard, warrior, archer)<< endl;
	cin >> charactertype;

	while(charactertype == wizard) {
		wizard(name, charactertype, health, level, weapon);
		cout << "Wizard"<< endl;
		cout << "Health = 80"<< endl;
		cout << "Level = 1" << endl;
		cout << "Weapon = Staff" << endl;
	}
	while (charactertype == warrior) {
		warrior(name, charactertype, health, level, weapon);
		cout << "Warrior" << endl;
		cout << "Health = 100" << endl;
		cout << "Level = 1" << endl;
		cout << "Weapon = Battleaxe" << endl;
	}
	while (charactertype == archer) {
		warrior(name, charactertype, health, level, weapon);
		cout << "Archer" << endl;
		cout << "Health = 90" << endl;
		cout << "Level = 1" << endl;
		cout << "Weapon = Bow" << endl;
	}


	return 0;

}
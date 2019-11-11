#pragma once
#pragma once
#include <iostream>
#include "weapon.h"

class warrior {

private:
	std::string name_;
	std::string charactertype_;
	int health_;
	int level_;
	std::string weapon_;

public:
	warrior(std::string name, std::string charactertype, int health, int level, std::string weapon)
		:name_{ name }, charactertype_{ charactertype }, health_{ health }, level_{ level }, weapon_{ weapon }{

	}
	void setname(std::string name) {
		name_ = name;
	}
	std::string getname()const {
		return name_;
	}
	void setcharactertype(std::string charactertype) {
		charactertype_ = charactertype;
	}
	std::string getcharactertype()const {
		return charactertype_;
	}
	void sethealth(int health) {
		health_ = health;
	}
	int gethealth()const {
		return health_;
	}
	void setlevel(int level) {
		level_ = level;
	}
	int getlevel()const {
		return level_;
	}
};

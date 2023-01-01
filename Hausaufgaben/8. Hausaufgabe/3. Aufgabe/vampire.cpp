#include <sstream>
#include <iostream>

#include "vampire.hpp"

Vampire::Vampire(std::string name, char team, int health, unsigned int power, unsigned int age)
	: Monster(name, team, health, power), age(age)
{
}

void Vampire::attack(Monster* other) 
{
	// anderes Monster angreifen und sich dadurch heilen
	int damage = this->power + this->age;
	other->health -= damage;
	std::cout << this->name << " beisst "
				<< other->name << ", verursacht "
				<< damage << " Schaden" 
				<< ", heilt sich um 1 Gesundheit und altert um 1."
				<< std::endl;
	this->health++;
	this->age++;
}

std::string Vampire::asString()
{
	std::stringstream ss;
	ss << Monster::asString() << ",age=\"" << this->age << "\"";
	return ss.str();
}

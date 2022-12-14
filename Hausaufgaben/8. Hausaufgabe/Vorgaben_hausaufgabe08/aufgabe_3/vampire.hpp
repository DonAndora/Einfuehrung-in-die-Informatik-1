#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include <string>

#include "monster.hpp"

class Vampire : public Monster
{
public:
	unsigned int age;

	Vampire(std::string, char, int, unsigned int, unsigned int);
	virtual void attack(Monster*);
	virtual std::string asString();
};

#endif

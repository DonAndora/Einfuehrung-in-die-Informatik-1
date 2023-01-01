#ifndef TROLL_HPP
#define TROLL_HPP

#include "monster.hpp"

class Troll : public Monster {
public:
    unsigned int armor;

    Troll(std::string, char, int, unsigned int, unsigned int);
    virtual void attack(Monster *);
    virtual void support(Monster *);
    virtual std::string asString();
};

#endif
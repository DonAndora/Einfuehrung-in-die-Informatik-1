#ifndef IMP_HPP
#define IMP_HPP

#include <string>

#include "monster.hpp"

class Imp : public Monster {
public:
    unsigned int mana;

    Imp(std::string, char, int, unsigned int, unsigned int);
    virtual void attack(Monster *);
    virtual void support(Monster *);
    virtual std::string asString();
};

#endif
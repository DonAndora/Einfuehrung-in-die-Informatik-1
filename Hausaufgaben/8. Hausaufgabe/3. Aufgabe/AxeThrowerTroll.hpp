#ifndef AXETHROWERTROLL_HPP
#define AXETHROWERTROLL_HPP

#include "troll.hpp"

class AxeThrowerTroll : public Troll {
public:
    unsigned int numAxes;

    AxeThrowerTroll(std::string, char, int, unsigned int, unsigned int, unsigned int);
    virtual void attack(Monster *);
    virtual std::string asString();
};

#endif
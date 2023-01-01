#ifndef MONSTER_HPP
#define MONSTER_HPP

#include <string>

class Monster {
public:
    std::string name;
    char team;
    int health;
    unsigned int power;

    Monster(std::string, char, int, unsigned int);
    ~Monster();
    virtual void attack(Monster *other);
    virtual void support(Monster *other);
    std::string asString();
};

#endif
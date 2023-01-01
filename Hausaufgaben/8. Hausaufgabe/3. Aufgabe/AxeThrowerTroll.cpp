#include <iostream>
#include <sstream>

#include "axethrowertroll.hpp"

AxeThrowerTroll::AxeThrowerTroll(std::string name, char team, int health, unsigned int power, unsigned int armor, unsigned int numAxes)
    : Troll(name, team, health, power, armor), numAxes(numAxes) {
}

void AxeThrowerTroll::attack(Monster *other) {
    if (this->numAxes > 0) {
        int damage = 3 * this->power;
        this->numAxes -= 1;
        other->health -= damage;
        std::cout << this->name << " greift "
                  << other->name << "an, verursacht "
                  << damage << " Schaden."
                  << std::endl;
    } else {
        Troll::attack(other);
    }
}

std::string AxeThrowerTroll::asString() {
    std::stringstream ss;
    ss << Troll::asString() << ",numAxes=\"" << this->numAxes << "\"";
    return ss.str();
}

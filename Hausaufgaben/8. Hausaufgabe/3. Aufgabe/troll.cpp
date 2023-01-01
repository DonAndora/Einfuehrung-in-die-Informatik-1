#include <iostream>
#include <sstream>

#include "troll.hpp"

Troll::Troll(std::string name, char team, int health, unsigned int power, unsigned int armor)
    : Monster(name, team, health, power), armor(armor) {
}

void Troll::attack(Monster *other) {
    // anderes Monster angreifen und sich dadurch heilen
    int damage = this->power * 2 - this->armor;
    if (damage < 1) {
        damage = 1;
    }
    other->health -= damage;
    std::cout << this->name << " greift "
              << other->name << "an, verursacht "
              << damage << " Schaden."
              << std::endl;
}

void Troll::support(Monster *other) {
    std::cout << this->name << " motiviert " << other->name << "!" << std::endl;
    other->power += 1;
}

std::string Troll::asString() {
    std::stringstream ss;
    ss << Monster::asString() << ",armor=\"" << this->armor << "\"";
    return ss.str();
}
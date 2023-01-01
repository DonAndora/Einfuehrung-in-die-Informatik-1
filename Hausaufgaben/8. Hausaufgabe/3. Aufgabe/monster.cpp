#include <iostream>
#include <sstream>

#include "monster.hpp"

Monster::Monster(std::string name, char team, int health, unsigned int power)
    : name(name), team(team), health(health), power(power) {
    std::cout << this->name << " erschaffen." << std::endl;
}

void Monster::attack(Monster *other) {
    // anderes Monster angreifen
    int damage = this->power;
    other->health -= damage;
    std::cout << this->name << " greift "
              << other->name << "an, verursacht "
              << damage << " Schaden"
              << std::endl;
}

void Monster::support(Monster *other) {
    std::cout << this->name << " starrt " << other->name << " nutzlos mit offenem Mund an." << std::endl;
}

std::string Monster::asString() {
    std::stringstream ss;
    ss << "Name=\"" << this->name << "\""
       << ", Team=\"" << this->team << "\""
       << ", Health=\"" << this->health << "\"";
    return ss.str();
}

Monster::~Monster() {
    std::cout << this->name << " verschwindet." << std::endl;
}
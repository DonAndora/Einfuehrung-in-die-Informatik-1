#include <iostream>
#include <sstream>

#include "imp.hpp"

Imp::Imp(std::string name, char team, int health, unsigned int power, unsigned int mana)
    : Monster(name, team, health, power), mana(mana) {
}

void Imp::attack(Monster *other) {
    if (this->mana >= 2) {
        int damage = 3 * this->power;
        this->mana -= 2;
        other->health -= damage;
        std::cout << this->name << " greift "
                  << other->name << "an, verursacht "
                  << damage << " Schaden."
                  << std::endl;
    } else {
        this->mana += 1;
        std::cout << this->name << " regeneriert 1 mana." << std::endl;
    }
}

void Imp::support(Monster *other) {
    Imp *impMonster = dynamic_cast<Imp *>(other);
    if (this->mana > 0) {
        if (impMonster == nullptr) {
            other->health += 2 * this->power;
        } else {
            impMonster->mana += 1;
        }
        this->mana -= 1;
    } else {
        this->mana += 1;
    }
}

std::string Imp::asString() {
    std::stringstream ss;
    ss << Monster::asString() << ",mana=\"" << this->mana << "\"";
    return ss.str();
}
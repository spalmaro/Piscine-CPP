#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string _type): type(_type) {
    return ;
}

Weapon::~Weapon(void) {
    return ;
}

std::string const & Weapon::getType() {
    return this->type;
}

void                Weapon::setType(std::string _type) {
    this->type = _type;
}
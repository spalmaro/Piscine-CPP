#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name): name(_name) {
    return ;
}

HumanB::~HumanB(void) {
    return ;
}

void        HumanB::attack() {
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void        HumanB::setWeapon(Weapon &_weapon) { //need the reference here or it points to a different address
    this->weapon = &_weapon;
}
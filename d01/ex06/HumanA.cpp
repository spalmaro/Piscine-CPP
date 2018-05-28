#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string _name, Weapon &_weapon): name(_name), weapon(_weapon) {
    return ;
}

HumanA::~HumanA(void) {
    return ;
}

void        HumanA::attack() {
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

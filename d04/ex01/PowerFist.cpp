#include "includes/PowerFist.hpp"
#include <iostream>
#include <string>

PowerFist::PowerFist(void) {
    this->_name = "Power Fist";
    this->_damage = 50;
    this->_apcost = 8;

    return ;
}

PowerFist::~PowerFist() {
    return ;
}

PowerFist::PowerFist(PowerFist const & src) {
    *this = src;

    return ;
}

PowerFist &               PowerFist::operator = (PowerFist const & rhs) {
    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();

    return *this;
}

void                        PowerFist::attack() const {
   std::cout << "* pschhh... SBAM! *" << std::endl;
}
#include "includes/PlasmaRifle.hpp"
#include <iostream>
#include <string>

PlasmaRifle::PlasmaRifle(void) {
    this->_name = "Plasma Rifle";
    this->_damage = 21;
    this->_apcost = 5;

    return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
    *this = src;

    return ;
}

PlasmaRifle::~PlasmaRifle() {
    return ;
}


PlasmaRifle &               PlasmaRifle::operator = (PlasmaRifle const & rhs) {
    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();

    return *this;
}

void                        PlasmaRifle::attack() const {
   std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

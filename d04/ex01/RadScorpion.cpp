#include "includes/RadScorpion.hpp"
#include <iostream>
#include <string>

RadScorpion::RadScorpion(void) {
    this->hp = 80;
    this->type = "Rad Scorpion";

    std::cout << "* click click click *" << std::endl ;

    return ;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl ;
    return ;
}

RadScorpion::RadScorpion(RadScorpion const & src) {
    *this = src;

    return ;
}

RadScorpion &               RadScorpion::operator = (RadScorpion const & rhs) {
    this->hp = rhs.getHP();
    this->type = rhs.getType();

    return *this;
}

void                        RadScorpion::takeDamage(int damage) {
    if (damage - 3 < 0)
        return ;

    bool test = (this->hp + 3 - damage) <= 0;

    if (test)
        this->hp = 0;
    else
        this->hp = this->hp - damage;
}

#include "includes/SuperMutant.hpp"
#include <iostream>
#include <string>

SuperMutant::SuperMutant(void) {
    this->hp = 170;
    this->type = "Super Mutant";

    std::cout << "Gaaah. Me want smash heads !" << std::endl ;

    return ;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh ..." << std::endl ;
    return ;
}

SuperMutant::SuperMutant(SuperMutant const & src) {
    *this = src;

    return ;
}

SuperMutant &               SuperMutant::operator = (SuperMutant const & rhs) {
    this->hp = rhs.getHP();
    this->type = rhs.getType();

    return *this;
}

void                        SuperMutant::takeDamage(int damage) {
    if (damage - 3 < 0)
        return ;

    bool test = (this->hp + 3 - damage) <= 0;

    if (test)
        this->hp = 0;
    else
        this->hp = this->hp - damage;
}

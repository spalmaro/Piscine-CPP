#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony(std::string color): _color(color) {
    std::cout << "A wild " << this->_color << " pony just appeared!" << std::endl;

    return ;
}

Pony::~Pony(void) {
    std::cout << "The wild " << this->_color << " pony escaped." << std::endl;
    return ;
}

void Pony::charm(void) const {
    std::cout << "The " << this->_color << " pony is using charm against its opponent." << std::endl;
}

void Pony::taunt(void) const {
    std::cout << "The " << this->_color << " pony is taunting its opponent." << std::endl;
}

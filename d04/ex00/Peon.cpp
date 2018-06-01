#include "Peon.hpp"
#include <iostream>

Peon::Peon(void) {
    return ;
}

Peon::Peon(std::string name):Victim(name) {
    this->_name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src){
    *this = src;

    return ;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}

Peon &      Peon::operator = (Peon const & rhs) {
    this->_name = rhs.getName();
    
    return *this;
}

void        Peon::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
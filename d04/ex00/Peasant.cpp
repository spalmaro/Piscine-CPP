#include "Peasant.hpp"
#include <iostream>

Peasant::Peasant(void) {
    return ;
}

Peasant::Peasant(std::string name):Victim(name) {
    this->_name = name;
    std::cout << "Yes, milord?" << std::endl;
}

Peasant::Peasant(Peasant const & src){
    *this = src;

    return ;
}

Peasant::~Peasant(void) {
    std::cout << "Help ! Help ! I'm being repressed !" << std::endl;
}

Peasant &      Peasant::operator = (Peasant const & rhs) {
    this->_name = rhs.getName();
    
    return *this;
}

void        Peasant::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a sea turtle !" << std::endl;
}
#include "Victim.hpp"
#include <iostream>

Victim::Victim(void) {
    return ;
}

Victim::Victim(std::string name):_name(name) {
    std::cout << "Some random victim called " << this->_name << " just popped!" << std::endl;
}

Victim::Victim(Victim const & src) {
    *this = src;

    return ;
}

Victim::~Victim(void) {
    std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim &  Victim::operator = (Victim const & rhs) {
    this->_name = rhs.getName();
    
    return *this;
}

void        Victim::introduce() const {
    std::cout << "I'm " << this->_name << ", and I like otters !" << std::endl;
}

std::string Victim::getName() const {
    return this->_name;
}

void        Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &      operator<<( std::ostream &o, Victim const & rhs) {
    o << "I'm " << rhs.getName() << ", and I like otters !" << std::endl;

    return o;
}
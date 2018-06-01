#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(void) {
    return ;
}

Sorcerer::Sorcerer(std::string name, std::string title):_name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
    *this = src;

    return ;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &  Sorcerer::operator = (Sorcerer const & rhs) {
    this->_name = rhs.getName();
    this->_title = rhs.getTitle();

    return *this;
}

void        Sorcerer::introduce() const {
    std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies !" << std::endl;
}

std::string Sorcerer::getName() const {
    return this->_name;
}

std::string Sorcerer::getTitle() const {
    return this->_title;
}

void        Sorcerer::polymorph(Victim const & victim) const {
    victim.getPolymorphed();
}


// Outside class scope
std::ostream &  operator<<( std::ostream &o, Sorcerer const & rhs) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;

    return o;
}
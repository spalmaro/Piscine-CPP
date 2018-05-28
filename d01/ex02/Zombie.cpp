#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string _type, std::string _name): type(_type), name(_name) {
    return ;
}

Zombie::~Zombie() {
    return ;
}   

void Zombie::announce(void) const {
    std::cout << "< " << this->name << " " << this->type << " > Braiiiiiiiiiiiiiiiins..." << std::endl;
}
#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie() {
    return ;
}

Zombie::~Zombie() {
    return ;
}   

void Zombie::announce(void) const {
    std::cout << "< " << this->name << " " << this->type << " > Braiiiiiiiiiiiiiiiins..." << std::endl;
}
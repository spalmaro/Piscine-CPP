#include "ZombieEvent.hpp"
#include <iostream>
#include <string>

ZombieEvent::ZombieEvent(std::string _type): type(_type) {
    return ;
}

ZombieEvent::~ZombieEvent() {
    return ;
}

void ZombieEvent::setZombieType(std::string _type) {
    this->type = _type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie* zomb = new Zombie(this->type, name);

    return zomb;
}
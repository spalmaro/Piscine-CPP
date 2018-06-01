#include "includes/Character.hpp"
#include <iostream>

Character::Character(void) {
    return ;
}

Character::Character(std::string const & name):name(name) {
    this->ap = 40;
    this->weapon = NULL;
}

Character::Character(Character const & src) {
    *this = src;

    return ;
}

Character::~Character(void) {
    return ;
}


Character &             Character::operator = (Character const & rhs) {
    this->name = rhs.getName();

    return *this;
}


void                    Character::recoverAP() {
    if ((this->ap + 10) <= 40)
        this->ap += 10;
    else
        this->ap = 40;
}

void                    Character::equip(AWeapon* _weapon) {
    this->weapon = _weapon;
}

void                    Character::attack(Enemy *enemy) {
    bool test = (this->ap - this->weapon->_apcost) <= 0;

    if (test || !this->weapon)
        return ;
    else {
        std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->_name << std::endl; 
        this->ap -= this->weapon->_apcost;
        this->weapon->attack();
        enemy->takeDamage(this->weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

std::string const &     Character::getName() const {
    return this->name;
}

AWeapon*                Character::getWeapon() const {
    
    if (this->weapon)
        return this->weapon;
    else {
        return NULL;
    }
}   

int                     Character::getAP() const {
    return this->ap;
}

std::ostream &      operator<<( std::ostream &o, Character const & rhs) {
    // std::cout << "[TESSSST] " << rhs.getWeapon()->_damage << std::endl;
    if (rhs.getWeapon() == NULL)
        o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
    else
        o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->_name << std::endl;
    return o;
}

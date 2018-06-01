#include "includes/Enemy.hpp"
#include <iostream>
#include <string>

Enemy::Enemy(void) {
    this->hp = 100;
    this->type = "Noob";

    return ;
}

Enemy::Enemy(int hp, std::string const & type):hp(hp), type(type) {
    return ;
}

Enemy::Enemy(Enemy const & src) {
    *this = src;

    return ;
}

Enemy::~Enemy(void) {
    return ;
}


Enemy &                 Enemy::operator = (Enemy const & rhs) {
    this->hp = rhs.getHP();
    this->type = rhs.getType();
    
    return *this;
};


std::string const &     Enemy::getType() const {
    return this->type;
}

int                     Enemy::getHP() const {
    return this->hp;
}

void                    Enemy::takeDamage(int damage) {
    if (damage < 0)
        return ;

    bool test = (this->hp - damage) <= 0;

    if (test)
        this->hp = 0;
    else
        this->hp = this->hp - damage;

}  

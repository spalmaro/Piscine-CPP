#include "ZombieHorde.hpp"
#include <iostream>
#include <string>

ZombieHorde::ZombieHorde(int _n): N(_n) {
    std::string randomNames[7] = {"Bob", "Gustave", "Torini", "Sandy", "Growly", "Juan", "Hector"};
    this->zombies = new Zombie[_n];

    for (int i = 0; i < _n; i++) {
        int choose = std::rand() % 7;

        this->zombies[i].type = "Horde";
        this->zombies[i].name = randomNames[choose];
    }
    return ;
}

ZombieHorde::~ZombieHorde() {
    delete [] this->zombies;
    return ;
}

void ZombieHorde::announce(void) const {
    for (int i = 0; i < this->N; i++) {
        this->zombies[i].announce();
    }
}
#include "ZombieHorde.hpp"

int main(void) {
    srand(time(NULL));
    ZombieHorde horde(5);

    horde.announce();
    return 1;
}
#include "ZombieHorde.hpp"

int main(void) {
    srand(time(NULL)); //resets random so it changes with every execution
    ZombieHorde horde(5); //creates 5 zombie instances in the horde

    horde.announce();
    return 1;
}
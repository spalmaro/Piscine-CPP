#include "ZombieEvent.hpp"

Zombie* randomChump(ZombieEvent zombieFactory) {
    int choose = std::rand() % 5;

    std::string randomNames[5] = {"Bob", "Gustave", "Torini", "Sandy", "Growly"};
    Zombie *rand = zombieFactory.newZombie(randomNames[choose]);
    rand->announce();
    return rand;
}

int main(void) {
    srand(time(NULL)); //resets std::rand
    ZombieEvent zombieFactory("Brain-Eater");

    Zombie* hector = zombieFactory.newZombie("Hector");
    hector->announce(); //created directly from ZombieEvent width default Brain Eater

    Zombie* rand1 = randomChump(zombieFactory); //using the random zombie function

    zombieFactory.setZombieType("Ancient Zombie"); //changing Zombie type
    Zombie* juan = zombieFactory.newZombie("Juan");
    juan->announce(); //created from ZombieEvent with changed type

    Zombie* rand2 = randomChump(zombieFactory); //using the random zombie function and having changed the type

    delete hector;
    delete rand1;
    delete juan;
    delete rand2;

    return 1;
}
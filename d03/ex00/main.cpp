#include "FragTrap.hpp"
#include <iostream>

int     main( void ) {
    srand(time(NULL)); //resets std::rand
    
    FragTrap    bob = FragTrap("Bob");
    FragTrap    dm = FragTrap("Death Machine");

    bob.meleeAttack("Death Machine");
    dm.takeDamage(30);
    dm.rangedAttack("Bob");
    bob.takeDamage(20);

    std::cout << std::endl;

    dm.vaulthunter_dot_exe("Bob");
    dm.vaulthunter_dot_exe("Bob");
    dm.vaulthunter_dot_exe("Bob");
    dm.vaulthunter_dot_exe("Bob");
    bob.takeDamage(95);
    dm.vaulthunter_dot_exe("Bob");
    bob.beRepaired(15);
    bob.vaulthunter_dot_exe("Death Machine");
    dm.takeDamage(5);

    std::cout << std::endl;
    return 0;
}
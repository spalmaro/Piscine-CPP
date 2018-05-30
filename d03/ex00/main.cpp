#include "FragTrap.hpp"

int     main( void ) {
    srand(time(NULL)); //resets std::rand
    
    FragTrap    bob = FragTrap("Bob");
    FragTrap    dm = FragTrap("Death Machine");

    bob.meleeAttack("Death Machine");
    dm.takeDamage(30);
    dm.rangedAttack("Bob");
    bob.takeDamage(20);
    dm.vaulthunter_dot_exe("Bob");
    bob.takeDamage(95);
    bob.beRepaired(15);
    bob.vaulthunter_dot_exe("Death Machine");
    dm.takeDamage(5);
    return 0;
}
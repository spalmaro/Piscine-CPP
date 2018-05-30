#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main( void ) {
    srand(time(NULL)); //resets std::rand
    
    ScavTrap    fred = ScavTrap("Fred");

    FragTrap    bob = FragTrap("Bob");
    FragTrap    dm = FragTrap("Death Machine");
    

    fred.challengeNewcomer("Death Machine");
    fred.challengeNewcomer("Bob");
    bob.meleeAttack("Death Machine");
    dm.takeDamage(30);
    dm.rangedAttack("Bob");
    bob.takeDamage(20);
    dm.vaulthunter_dot_exe("Bob");
    bob.takeDamage(95);
    bob.beRepaired(15);
    bob.vaulthunter_dot_exe("Death Machine");
    dm.takeDamage(5);

    bob.vaulthunter_dot_exe("Fred");
    fred.takeDamage(25);
    fred.beRepaired(10);
    return 0;
}
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int     main( void ) {
    srand(time(NULL)); //resets std::rand
    
    ScavTrap    fred = ScavTrap("Fred");

    FragTrap    bob = FragTrap("Bob");
    FragTrap    dm = FragTrap("Death Machine");
    std::cout << std::endl;

    fred.challengeNewcomer("Death Machine");
    fred.challengeNewcomer("Bob");
    std::cout << std::endl;
    bob.meleeAttack("Death Machine");
    dm.takeDamage(30);
    dm.rangedAttack("Bob");
    bob.takeDamage(20);
    dm.vaulthunter_dot_exe("Bob");
    bob.takeDamage(95);
    bob.beRepaired(15);
    bob.vaulthunter_dot_exe("Death Machine");
    dm.takeDamage(5);

    std::cout << std::endl;
    bob.vaulthunter_dot_exe("Fred");
    fred.takeDamage(25);
    fred.beRepaired(10);
    fred.meleeAttack("Death Machine");

    std::cout << std::endl;
    NinjaTrap   ninja = NinjaTrap("Ninja");
    ninja.ninjaShoebox(bob);
    ninja.ninjaShoebox(dm);
    ninja.ninjaShoebox(ninja);
    std::cout << std::endl;

    SuperTrap super = SuperTrap("SUPER");
    super.FragTrap::vaulthunter_dot_exe("Fred");
    super.ninjaShoebox(dm);
    super.rangedAttack("Bob");
    super.meleeAttack("Bob");
    std::cout << std::endl;
    return 0;
}
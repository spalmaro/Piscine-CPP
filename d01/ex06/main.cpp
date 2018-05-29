#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob = HumanA("Bob", club); //appropriate to use ref because instance will always have a weapon
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim = HumanB("Jim"); //appropriate to use pointer because weapon does not exist when constructed
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}
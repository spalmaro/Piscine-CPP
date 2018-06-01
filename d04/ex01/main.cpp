#include <iostream>
#include "includes/Character.hpp"
#include "includes/Enemy.hpp"
#include "includes/AWeapon.hpp"
#include "includes/PlasmaRifle.hpp"
#include "includes/PowerFist.hpp"
#include "includes/RadScorpion.hpp"
#include "includes/SuperMutant.hpp"

int main()
{
    Character* zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    return 0;
}
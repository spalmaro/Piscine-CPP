#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"

#include <iostream>

int main()
{
    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    robert.polymorph(joe);

    std::cout << std::endl;
    
    //Sorcerer unknown();
    //Derived class test
    Peasant peasant = Peasant("Fred");

    peasant.introduce();
    robert.polymorph(peasant);
    std::cout << std::endl;

    return 0;
}
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) {
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_name = name;
    this->_meleeAttackDmg = 20;
    this->_rangedAttackDmg = 15;
    this->_armorDmgReduction = 3;
    std::cout << this->_name << " came out of Triton Flats" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    *this = src;
    return ;
}

ScavTrap::ScavTrap(void) {
    return ;
}

ScavTrap::~ScavTrap(void) {
    std::cout << this->_name << " went through the death gate" << std::endl;
    return ;
}

ScavTrap &  ScavTrap::operator = (ScavTrap const & rhs) {
    this->_hitPoints = rhs._hitPoints;
    this->_maxHitPoints = rhs._maxHitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_maxEnergyPoints = rhs._maxEnergyPoints;
    this->_level = rhs._level;
    this->_name = rhs._name;
    this->_meleeAttackDmg = rhs._meleeAttackDmg;
    this->_rangedAttackDmg = rhs._rangedAttackDmg;
    this->_armorDmgReduction = rhs._armorDmgReduction;

    return *this;
}

void        ScavTrap::challengeNewcomer(std::string const & target) {
    std::string randomChallenges[5] = {
        "drink fermented milk",
        "kill Dark Siders and bring proof",
        "go through the Magic Forest and bring back a fairy's hair",
        "smell Marvin's dirty socks",
        "pass the C++ pool at 42"
    };
    if (this->_energyPoints < 25)
        std::cout << "You do not have enough energy" << std::endl;
    else {
        this->_energyPoints -= 25;
        
        int choose = std::rand() % 5;

        std::cout << this->_name << " challenges " << target << " to *" << randomChallenges[choose] << "* " << std::endl;

    }

}


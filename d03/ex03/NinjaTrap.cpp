#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) {
    std::cout << this->_name << " is now invisible" << std::endl;
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_name = name;
    this->_meleeAttackDmg = 60;
    this->_rangedAttackDmg = 5;
    this->_armorDmgReduction = 0;
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

    int choose = std::rand() % 5;

    std::cout << this->_name << " challenges " << target << "to *" << randomChallenges[choose] << "* " << std::endl;

}


#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) {
    this->_name = name;
    std::cout << this->_name << " has just been reprogrammed by Handsome Jack" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const & src) {
    *this = src;
    return ;
}

FragTrap::FragTrap(void) {
    return ;
}

FragTrap::~FragTrap(void) {
    std::cout << this->_name << " has been destroyed" << std::endl;
    return ;
}

FragTrap &  FragTrap::operator = (FragTrap const & rhs) {
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

void        FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::string randomAttacks[5] = {
        "uses a shadow sneak attack on",
        "throws unicorn grenades at",
        "sings at the top of its metallic lungs for ",
        "inappropriately touches",
        "calls for help to beat"
    };
    if (this->_energyPoints < 25)
        std::cout << "You do not have enough energy" << std::endl;
    else {
        this->_energyPoints -= 25;
        
        int choose = std::rand() % 5;

        std::cout << this->_name << " *" << randomAttacks[choose] << "* " << target << std::endl;

    }
}


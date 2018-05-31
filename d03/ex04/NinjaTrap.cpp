#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string name) {
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_name = name;
    this->_meleeAttackDmg = 60;
    this->_rangedAttackDmg = 5;
    this->_armorDmgReduction = 0;
    std::cout << this->_name << " appeared through the shadows" << std::endl;
    return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {
    *this = src;
    return ;
}

NinjaTrap::NinjaTrap(void) {
    this->_name = "NINJ4-TR4P";
    return ;
}

NinjaTrap::~NinjaTrap(void) {
    std::cout << this->_name << " is now invisible" << std::endl;
    return ;
}

NinjaTrap &  NinjaTrap::operator = (NinjaTrap const & rhs) {
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

void        NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
    if (this->_energyPoints < 25)
        std::cout << this->_name << " does not have enough energy" << std::endl;
    else {
        this->_energyPoints -= 25;
        std::cout << target._name << " *used the cloning jutsu* "<< std::endl;
    }

}

void        NinjaTrap::ninjaShoebox(ScavTrap & target) {
    if (this->_energyPoints < 25)
        std::cout << this->_name << " does not have enough energy" << std::endl;
    else {
        this->_energyPoints -= 25;
        std::cout << this->_name << " makes ";
        target.challengeNewcomer("a random character");
    }
}

void        NinjaTrap::ninjaShoebox(FragTrap & target) {
    if (this->_energyPoints < 25)
        std::cout << this->_name << " does not have enough energy" << std::endl;
    else {
        this->_energyPoints -= 25;
        std::cout << this->_name << " makes ";
        target.vaulthunter_dot_exe("a random character");
    }
}

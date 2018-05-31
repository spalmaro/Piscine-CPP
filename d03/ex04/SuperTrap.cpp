#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string name):FragTrap(name), NinjaTrap(name) {
    std::cout << "^^^^" << NinjaTrap::_meleeAttackDmg << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_maxHitPoints =  FragTrap::_maxHitPoints;
    this->_energyPoints = NinjaTrap::_energyPoints;
    this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    this->_level = 1;
    this->_meleeAttackDmg = NinjaTrap::_meleeAttackDmg;
    this->_rangedAttackDmg = FragTrap::_rangedAttackDmg;
    this->_armorDmgReduction = FragTrap::_armorDmgReduction;
    this->_name = name;
    std::cout << "[ FR4G-TRAP & NINJ4-TR4P ] gave birth to " << this->_name << std::endl;
    return ;
}

SuperTrap::SuperTrap(SuperTrap const & src) {
    *this = src;
    return ;
}

SuperTrap::SuperTrap(void) {
    return ;
}

SuperTrap::~SuperTrap(void) {
    std::cout << "[EXIT CODE] " << this->_name << std::endl;
    return ;
}

SuperTrap &  SuperTrap::operator = (SuperTrap const & rhs) {
    this->_hitPoints = rhs._hitPoints;
    this->_maxHitPoints = rhs._maxHitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_maxEnergyPoints = rhs._maxEnergyPoints;
    this->_name = rhs._name;
    this->_level = rhs._level;
    this->_meleeAttackDmg = rhs._meleeAttackDmg;
    this->_rangedAttackDmg = rhs._rangedAttackDmg;
    this->_armorDmgReduction = rhs._armorDmgReduction;

    return *this;
}

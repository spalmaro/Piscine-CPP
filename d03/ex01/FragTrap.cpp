#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name):_hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
_level(1), _name(name), _meleeAttackDmg(30), _rangedAttackDmg(20), _armorDmgReduction(5) {
    std::cout << this->_name << " has just been reprogrammed by Handsome Jack" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const & src) {
    *this = src;
    return ;
}

FragTrap::FragTrap(void):_hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
_level(1), _meleeAttackDmg(30), _rangedAttackDmg(20), _armorDmgReduction(5) {
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

void        FragTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDmg << " points of damage !" << std::endl;
}

void        FragTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " melee attacks " << target << ", causing " << this->_meleeAttackDmg << " points of damage !" << std::endl;
}

void        FragTrap::takeDamage(unsigned int amount) {
    int     test = (unsigned int)this->_armorDmgReduction >= amount;
    int     test2 = amount >= (unsigned int)(this->_hitPoints + this->_armorDmgReduction);

    if (test) {
        std::cout << "No damage taken... " << this->_name << " is still at *" << this->_hitPoints << "* HP" << std::endl;
        return ;
    }
    else if (test2) {
        this->_hitPoints = 0;
    } else {
        this->_hitPoints = (unsigned int)(this->_hitPoints + this->_armorDmgReduction) - amount;
    }
    std::cout << this->_name << " received *" << amount << "* of damage and is now at *" << this->_hitPoints << "* HP" << std::endl;
}

void        FragTrap::beRepaired(unsigned int amount) {
    int     test = ((unsigned int)this->_hitPoints + amount ) < (unsigned int)this->_maxHitPoints;
    if (!test) {
        this->_hitPoints = this->_maxHitPoints;
        std::cout << this->_name << " has fully recovered its HP !" << std::endl;
    }
    else {
        this->_hitPoints += amount;
        std::cout << this->_name << " has recovered " << amount << " of HP and is now at " << this->_hitPoints << " HP" << std::endl;
    }
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


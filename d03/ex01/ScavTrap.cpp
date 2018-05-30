#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name):_hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
_level(1), _name(name), _meleeAttackDmg(20), _rangedAttackDmg(15), _armorDmgReduction(3) {
    std::cout << this->_name << " came out of Triton Flats" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    *this = src;
    return ;
}

ScavTrap::ScavTrap(void):_hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
_level(1), _meleeAttackDmg(20), _rangedAttackDmg(15), _armorDmgReduction(3) {
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

void        ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDmg << " points of damage !" << std::endl;
}

void        ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP " << this->_name << " melee attacks " << target << ", causing " << this->_meleeAttackDmg << " points of damage !" << std::endl;
}

void        ScavTrap::takeDamage(unsigned int amount) {
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

void        ScavTrap::beRepaired(unsigned int amount) {
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

void        ScavTrap::challengeNewcomer(std::string const & target) {
    std::string randomChallenges[5] = {
        "drink fermented milk",
        "kill Dark Siders and bring proof",
        "go through the Magic Forest and bring back a fairy's hair",
        "smell Marvin's dirty socks",
        "pass the C++ pool at 42"
    };
    // if (this->_energyPoints < 25)
    //     std::cout << "You do not have enough energy" << std::endl;
    // else {
        // this->_energyPoints -= 25;
        
    int choose = std::rand() % 5;

    std::cout << this->_name << " challenges " << target << "to *" << randomChallenges[choose] << "* " << std::endl;

    // }
}


#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

#include <string>

class ScavTrap {
    private:
        unsigned int        _hitPoints;
        unsigned int        _maxHitPoints;
        unsigned int        _energyPoints;
        unsigned int        _maxEnergyPoints;
        int                 _level;
        std::string         _name;
        unsigned int        _meleeAttackDmg;
        unsigned int        _rangedAttackDmg;
        unsigned int        _armorDmgReduction;
        ScavTrap(void);
    
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap(void);

        ScavTrap &  operator = (ScavTrap const & rhs);
        void        rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
        void        challengeNewcomer(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};

#endif
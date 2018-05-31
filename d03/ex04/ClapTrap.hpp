#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H

#include <string>

class ClapTrap {
    protected:
        unsigned int        _hitPoints;
        unsigned int        _maxHitPoints;
        unsigned int        _energyPoints;
        unsigned int        _maxEnergyPoints;
        int                 _level;
        std::string         _name;
        unsigned int        _meleeAttackDmg;
        unsigned int        _rangedAttackDmg;
        unsigned int        _armorDmgReduction;
    
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap(void);

        ClapTrap &  operator = (ClapTrap const & rhs);
        void        rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};

#endif
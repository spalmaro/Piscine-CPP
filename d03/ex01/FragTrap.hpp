#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

#include <string>

class FragTrap {
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
        FragTrap(void);
    
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);

        FragTrap &  operator = (FragTrap const & rhs);
        void        rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
        void        vaulthunter_dot_exe(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};

#endif
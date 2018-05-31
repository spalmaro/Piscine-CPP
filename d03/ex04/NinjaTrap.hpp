#ifndef NINJATRAP_CLASS_H
# define NINJATRAP_CLASS_H

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: public virtual ClapTrap {
    protected:
        unsigned int        _hitPoints;
        unsigned int        _maxHitPoints;
        unsigned int        _energyPoints;
        unsigned int        _maxEnergyPoints;
        unsigned int        _meleeAttackDmg;
        unsigned int        _rangedAttackDmg;
        unsigned int        _armorDmgReduction;
    public:
        NinjaTrap(void);
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const & src);
        ~NinjaTrap(void);

        NinjaTrap &  operator = (NinjaTrap const & rhs);
        void        ninjaShoebox(ScavTrap & target);
        void        ninjaShoebox(NinjaTrap const & target);
        void        ninjaShoebox(FragTrap & target);
};

#endif
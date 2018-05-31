#ifndef SUPERTRAP_CLASS_H
# define SUPERTRAP_CLASS_H

#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {
    private:
        std::string     _name;
        int             _level;
        SuperTrap(void);
    
    public:
        SuperTrap(std::string name);
        SuperTrap(SuperTrap const & src);
        ~SuperTrap(void);

        SuperTrap &  operator = (SuperTrap const & rhs);
        void        challengeNewcomer(std::string const & target);
        void        rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
};

#endif
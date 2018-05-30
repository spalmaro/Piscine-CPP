#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    private:
        ScavTrap(void);
    
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap(void);

        ScavTrap &  operator = (ScavTrap const & rhs);
        void        challengeNewcomer(std::string const & target);
};

#endif
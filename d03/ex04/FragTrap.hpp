#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

#include <string>
#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {
    private:
    
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);

        FragTrap &  operator = (FragTrap const & rhs);
        void        vaulthunter_dot_exe(std::string const & target);
        void        rangedAttack(std::string const & target);
};

#endif
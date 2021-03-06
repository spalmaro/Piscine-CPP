#ifndef NINJATRAP_CLASS_H
# define NINJATRAP_CLASS_H

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: public ClapTrap {
    private:
        NinjaTrap(void);
    
    public:
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const & src);
        ~NinjaTrap(void);

        NinjaTrap &  operator = (NinjaTrap const & rhs);
        void        ninjaShoebox(ScavTrap & target);
        void        ninjaShoebox(NinjaTrap const & target);
        void        ninjaShoebox(FragTrap & target);
};

#endif
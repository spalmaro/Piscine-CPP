#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

#include "Weapon.hpp"
#include <string>

class HumanA {
    public:
        HumanA(std::string _name, Weapon &_weapon);
        ~HumanA(void);

        std::string name;
        Weapon      &weapon;
        
        void        attack();

};

#endif
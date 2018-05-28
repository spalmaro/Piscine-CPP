#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

#include "Weapon.hpp"
#include <string>

class HumanB {
    public:
        HumanB(std::string _name);
        ~HumanB(void);

        std::string name;
        Weapon      *weapon;
        
        void        attack();
        void        setWeapon(Weapon &_weapon);

};

#endif
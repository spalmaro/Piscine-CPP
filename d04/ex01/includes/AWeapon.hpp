#ifndef AWEAPON_CLASS_H
# define AWEAPON_CLASS_H

#include <string> 

class AWeapon {
    protected:
        AWeapon(void);

    public:
        AWeapon(std::string const & name, int apcost, int damage);
        virtual ~AWeapon();

        AWeapon &               operator = (AWeapon const & rhs);

        std::string             getName() const;
        int                     getAPCost() const;
        int                     getDamage() const;
        virtual void            attack() const = 0;

        std::string             _name;
        int                     _apcost;
        int                     _damage;
};

#endif
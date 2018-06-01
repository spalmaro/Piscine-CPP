#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H

#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

    protected:
        Character(void);
        std::string             name;
        int                     ap;
        AWeapon*                weapon;
    
    public:
        Character(std::string const & name);
        Character(Character const & src);
        virtual                 ~Character(void);

        Character &             operator = (Character const & rhs);
        
        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);
        std::string const & getName() const;
        AWeapon*            getWeapon() const ;
        int                 getAP() const ;
              
};

std::ostream &      operator<<( std::ostream &o, Character const & rhs);

#endif
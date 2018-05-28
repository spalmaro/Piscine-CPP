#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <string>

class   Weapon {
    public:
        Weapon(std::string _type);
        ~Weapon(void);

        std::string type;

        std::string const &     getType();
        void                    setType(std::string _type);

};
#endif
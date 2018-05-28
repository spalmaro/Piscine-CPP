#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <string>

class Zombie {
    public:
        Zombie();
        ~Zombie(void);

        std::string type;
        std::string name;

        void announce(void) const;


};

#endif
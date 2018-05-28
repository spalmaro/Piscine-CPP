#ifndef ZOMBIE_HORDE_CLASS_H
# define ZOMBIE_HORDE_CLASS_H

#include <string>
#include "Zombie.hpp"

class ZombieHorde {
    public:
        ZombieHorde(int N);
        ~ZombieHorde(void);

        void announce(void) const;
    
    private:
        Zombie* zombies;
        int N;

};

#endif
#ifndef ZOMBIE_EVENT_CLASS_H
# define ZOMBIE_EVENT_CLASS_H

#include <string>
#include "Zombie.hpp"

class ZombieEvent {
    public:
        ZombieEvent(std::string _type);
        ~ZombieEvent(void);
        
        std::string type;

        void setZombieType(std::string _type);
        Zombie* newZombie(std::string name);

};

#endif
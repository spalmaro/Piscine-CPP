#ifndef RADSCORPION_CLASS_H
# define RADSCORPION_CLASS_H

#include <string>
#include "Enemy.hpp"

class RadScorpion: public Enemy {

    protected:
    
    public:
        RadScorpion(void);
        RadScorpion(RadScorpion const & src);
        virtual                 ~RadScorpion(void);

        RadScorpion &           operator = (RadScorpion const & rhs);
        virtual void            takeDamage(int);
};

#endif
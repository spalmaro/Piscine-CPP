#ifndef SUPERMUTANT_CLASS_H
# define SUPERMUTANT_CLASS_H

#include <string>
#include "Enemy.hpp"

class SuperMutant: public Enemy {

    protected:
    
    public:
        SuperMutant(void);
        SuperMutant(SuperMutant const & src);
        virtual                 ~SuperMutant(void);

        SuperMutant &           operator = (SuperMutant const & rhs);
        virtual void            takeDamage(int);
};

#endif
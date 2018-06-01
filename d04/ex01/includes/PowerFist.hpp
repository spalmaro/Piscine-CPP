#ifndef POWERFIST_CLASS_H
# define POWERFIST_CLASS_H

#include <string>
#include "AWeapon.hpp"

class PowerFist: public AWeapon {

    protected:
    
    public:
        PowerFist(void);
        PowerFist(PowerFist const & src);
        virtual             ~PowerFist(void);

        PowerFist &         operator = (PowerFist const & rhs);
        void                attack() const;
};

#endif
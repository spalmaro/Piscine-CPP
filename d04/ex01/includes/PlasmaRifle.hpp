#ifndef PLASMARIFLE_CLASS_H
# define PLASMARIFLE_CLASS_H

#include <string>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {

    protected:
    
    public:
        PlasmaRifle(void);
        PlasmaRifle(PlasmaRifle const & src);
        virtual             ~PlasmaRifle(void);

        PlasmaRifle &       operator = (PlasmaRifle const & rhs);
        void                attack() const;

};

#endif
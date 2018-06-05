#ifndef TACTICALMARINE_CLASS_H
# define TACTICALMARINE_CLASS_H

#include <string>
#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {

    protected:
    
    public:
        TacticalMarine(void);
        TacticalMarine(TacticalMarine const & src);
        virtual                 ~TacticalMarine(void);

        TacticalMarine &        operator = (TacticalMarine const & rhs);
        virtual ISpaceMarine* clone() const ;
        virtual void battleCry() const ;
        virtual void rangedAttack() const ;
        virtual void meleeAttack() const ;
};

#endif
#ifndef ASSAULTTERMINATOR_CLASS_H
# define ASSAULTTERMINATOR_CLASS_H

#include <string>
#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {

    protected:
    
    public:
        AssaultTerminator(void);
        AssaultTerminator(AssaultTerminator const & src);
        virtual                 ~AssaultTerminator(void);

        AssaultTerminator &        operator = (AssaultTerminator const & rhs);
        virtual ISpaceMarine* clone() const ;
        virtual void battleCry() const ;
        virtual void rangedAttack() const ;
        virtual void meleeAttack() const ;
};

#endif
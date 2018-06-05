#ifndef SQUAD_CLASS_H
# define SQUAD_CLASS_H

#include <string>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

typedef struct s_list{
    ISpaceMarine    *soldier;
    struct s_list   *next;
}               t_list;

class Squad: public ISquad {

    protected:
        int             unit;
        t_list*         marines;
    public:
        Squad(void);
        Squad(Squad const & src);
        virtual                 ~Squad(void);

        Squad &        operator = (Squad const & rhs);
        virtual         int getCount() const;
        virtual         ISpaceMarine* getUnit(int) const;
        virtual         int push(ISpaceMarine*);
};

#endif
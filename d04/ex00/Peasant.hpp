#ifndef PEASANT_CLASS_H
# define PEASANT_CLASS_H

#include <string>
#include "Victim.hpp"

class Peasant: public Victim {
    private:
        Peasant(void);
    
    public:
        Peasant(std::string name);
        Peasant(Peasant const & src);
        virtual         ~Peasant(void);

        Peasant &          operator = (Peasant const & rhs);
        virtual void    getPolymorphed() const;
};

#endif
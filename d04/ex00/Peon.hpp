#ifndef PEON_CLASS_H
# define PEON_CLASS_H

#include <string>
#include "Victim.hpp"

class Peon: public Victim{
    private:
        Peon(void);
    
    public:
        Peon(std::string name);
        Peon(Peon const & src);
        virtual         ~Peon(void);

        Peon &          operator = (Peon const & rhs);
        virtual void    getPolymorphed() const;
};

#endif
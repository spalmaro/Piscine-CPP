#ifndef VICTIM_CLASS_H
# define VICTIM_CLASS_H

#include <string>

class Victim {

    protected:
        Victim(void);
        std::string     _name;
    
    public:
        Victim(std::string name);
        Victim(Victim const & src);
        virtual         ~Victim(void);

        Victim &        operator = (Victim const & rhs);
        void            introduce() const;
        virtual void    getPolymorphed() const;
        std::string     getName() const ;
};

std::ostream &      operator<<( std::ostream &o, Victim const & rhs);

#endif
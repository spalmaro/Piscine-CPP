#ifndef SORCERER_CLASS_H
# define SORCERER_CLASS_H

#include <string>
#include "Victim.hpp"

class Sorcerer {
    private:
        Sorcerer(void);

        std::string _name;
        std::string _title;
    
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & src);
        ~Sorcerer(void);

        Sorcerer &  operator = (Sorcerer const & rhs);
        void        introduce() const ;
        std::string getName() const ;
        std::string getTitle() const ;
        void        polymorph(Victim const &) const ;
};

std::ostream &      operator<<( std::ostream &o, Sorcerer const & rhs);


#endif
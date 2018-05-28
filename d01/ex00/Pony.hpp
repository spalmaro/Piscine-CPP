#ifndef PONY_CLASS_H
# define PONY_CLASS_H
#include <string>

class Pony {
    public : 
        Pony(std::string color);
        ~Pony(void);
        
        void charm(void) const;
        void taunt(void) const;
    
    private :
        std::string _color;

};

#endif
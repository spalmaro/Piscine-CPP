#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

#include "Brain.hpp"
#include <string>

class Human {
    public:
        Human(void);
        ~Human(void);

        Brain brain;

        std::string identify();
        Brain &getBrain();
};

#endif
#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H
#include <string>

class Brain {
    public:
        Brain(void);
        ~Brain(void);

        std::string identify();
        void        setWeight(int i);
        int         getWeight() const ;

    private:
        int weight;
};

#endif
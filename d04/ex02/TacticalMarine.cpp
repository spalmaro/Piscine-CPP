#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine(void) {
    std::cout << "Tactical Marine ready for battle" << std::endl;

    return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) {
    *this = src;

    return ;
}

TacticalMarine::~TacticalMarine(void) {
    std::cout << "Aaargh ..." << std::endl;
    
    return ;
}


TacticalMarine &        TacticalMarine::operator = (TacticalMarine const & rhs) {
    (void) rhs;
    return *this;
}

ISpaceMarine*           TacticalMarine::clone() const  {
    TacticalMarine *tmp = new TacticalMarine(*this);
    
    return tmp;
}

void                    TacticalMarine::battleCry() const  {
    std::cout << "For the holy PLOT !" << std::endl;
    
    return ;
}

void                    TacticalMarine::rangedAttack() const  {
    std::cout << "* attacks with bolter *" << std::endl;
    
    return ;
}

void                    TacticalMarine::meleeAttack() const  {
    std::cout << "* attacks with chainsword *" << std::endl;
    
    return ;
}



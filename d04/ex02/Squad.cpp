#include "Squad.hpp"
#include <iostream>

Squad::Squad(void) {
    this->unit = 0;
    this->marines = NULL;
}

Squad::Squad(Squad const & src) {
    *this = src ;

    return ;
}

Squad::~Squad(void) {
    return ;
}


Squad &        Squad::operator = (Squad const & rhs) {
    this->unit = rhs.getCount();

    return *this;
} 

int Squad::getCount() const {
    return this->unit;
}

ISpaceMarine* Squad::getUnit(int i) const {
    return &this->marines[i];
}

int Squad::push(ISpaceMarine* space) {

    if (marines == NULL) {
        this->marines = new t_list;
        this->marines->soldier = space;
        this->marines->next = NULL;
    } else {
        t_list* tmp = this->marines;
        while(tmp->next) {
            if (tmp->soldier == space)
                return (this->unit);
            tmp = tmp->next;
        }
        tmp->next = new t_list;
        tmp->next->soldier = space;
        tmp->next->next = NULL;
    }

    this->unit++;
    return this->unit;
}

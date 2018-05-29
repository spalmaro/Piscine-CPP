#include "Human.hpp"
#include <string>
#include <iostream>

Human::Human(void): brain(Brain()) {

}

Human::~Human(void) {

}

std::string Human::identify() { //if getBrain returned a pointer the '.' would become a '->'
    return this->brain.identify();
}

Brain &Human::getBrain() { //gets reference of brain
    return this->brain;
}
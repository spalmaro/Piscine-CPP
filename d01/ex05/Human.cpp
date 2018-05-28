#include "Human.hpp"
#include <string>
#include <iostream>

Human::Human(void): brain(Brain()) {

}

Human::~Human(void) {

}

std::string Human::identify() {
    return this->brain.identify();
}

Brain &Human::getBrain() {
    return this->brain;
}
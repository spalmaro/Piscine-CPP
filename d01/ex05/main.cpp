#include "Human.hpp"
#include <iostream>

int main(void) {
    Human   bob;

    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify();
    return 1;
}
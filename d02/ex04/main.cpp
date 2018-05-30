#include "Fixed.hpp"
#include <iostream>
#include <sstream>

int main( int argc, char **argv ) {
    if (argc < 2)
        return -1;
    float i;
    std:: string str = argv[1];
    std::istringstream(str) >> i;

    std::cout << i << std::endl;
    return 0;
}
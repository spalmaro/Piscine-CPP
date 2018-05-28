#include"Brain.hpp"
#include <string>
#include <sstream>

Brain::Brain(void) {

}

Brain::~Brain(void){

}

std::string Brain::identify(void) {
    std::ostringstream ss;

    ss << (void const *)this;
    std::string address = ss.str();
    
    return address;
}
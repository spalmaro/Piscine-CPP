#include <string>
#include <iostream>

int main(void) {
    std::string brain = "HI THIS IS BRAIN";
    std::string* brainPtr = &brain;
    std::string& brainRef = brain;

    std::cout << "Pointer Brain " << *brainPtr << std::endl;
    std::cout << "Ref Brain " << brainRef << std::endl;
}
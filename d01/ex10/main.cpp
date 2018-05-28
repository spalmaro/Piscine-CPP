#include <fstream>
#include <iostream>
#include <string>

void    printFileToConsole(std::string filename) {
    std::ifstream ifs(filename);
    std::string tmp;
    if (!ifs) {
        std::cout << "cat: " << filename << ": No such file or directory" << std::endl;
    } else {
        while (getline(ifs, tmp)) {
            std::cout << tmp << std::endl;
        }
    }
}

int main(int argc, char **argv) {
    if (argc == 1) {
        while (true) {
            std::string str;
            std::getline(std::cin, str);
            std::cout << str << std::endl;
        }
    } else {
        for (int i = 1; i < argc; i++) {
            printFileToConsole(argv[i]);
        }
    }
    return 1;
}
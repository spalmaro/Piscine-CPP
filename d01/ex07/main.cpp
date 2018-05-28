#include <iostream>
#include <fstream>
#include <string>

int     error(int i) {
    if (i == 1) 
        std::cout << "[error] Invalid number of arguments." << std::endl;
    else if (i == 2)
        std::cout << "[error] File could not be opened." << std::endl;
    else if (i == 3)
        std::cout << "[error] Strings cannot be empty." << std::endl;
    else if (i == 3)
        std::cout << "[error] Failed to write file" << std::endl;
    return -1;
}

int     main(int argc, char **argv) {
    if (argc != 4)
        return error(1);
    
    std::string filename = argv[1];
    std::ifstream   ifs(filename);
    if (!ifs)
        return error(2);
    
    std::string toReplace = argv[2];
    std::string by = argv[3];
    if (toReplace.empty() || by.empty())
        return error(3);
    
    std::ofstream   ofs(filename + ".replace");
    if (!ofs)
        return error(4);

    std::string tmp;
    while (getline(ifs, tmp)) {
        while (tmp.find(toReplace) != std::string::npos)
        tmp.replace(tmp.find(toReplace), toReplace.length(), by);
        ofs << tmp;
    }

    ifs.close();
    ofs.close();

    return 1;
}
#include "Logger.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>

void        Logger::logToConsole(std::string log) {
    std::cout << log << std::endl;
}

void        Logger::logToFile(std::string log) {
    std::ofstream ofs;
    if (!ofs)
        return ;
    ofs.open ("Logger", std::ofstream::out | std::ofstream::app);

    ofs << log << std::endl;
    ofs.close();
}

std::string Logger::makeLogEntry(std::string msg) {
    std::time_t t = std::time(0);
    std::string tmp = std::asctime(std::localtime(&t));
    tmp[tmp.length() - 1] = '\0';
    std::string log = "[" + tmp + "] " + msg;

    return log;
}

void        Logger::log(std::string const & dest, std::string const & message) {
    std::string log_message = this->makeLogEntry(message);

    typedef         void (Logger::*Dest) (std::string msg);

    Dest            dests[2] = { &Logger::logToConsole, &Logger::logToFile };
    std::string     dest_names[2] = { "console", "file" };

    for (int i = 0; i < 2; i++) {
        if (dest == dest_names[i]) {
            (this->*(dests[i]))(log_message);
            return ;
        }
    }

    std::cout << "Destination not found" << std::endl;
}

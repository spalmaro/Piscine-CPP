#ifndef LOGGER_CLASS_H
# define LOGGER_CLASS_H

#include <string>

class Logger {
    private:
        void logToConsole(std::string str);
        void logToFile(std::string str);
        std::string makeLogEntry(std::string msg);

    public:
        void log(std::string const & dest, std::string const & message);
};

#endif
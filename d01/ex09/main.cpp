#include "Logger.hpp"

int main(void) {
    Logger logger;

    logger.log("console", "Awesomeness in the works");
    logger.log("file", "Checking file logging system");
    logger.log("file", "Checking file logging concatenation");
    return 1;
}
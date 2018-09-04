

#ifndef OOP_LOGGING_EXERCISE_FILELOGGER_HPP
#define OOP_LOGGING_EXERCISE_FILELOGGER_HPP

#include "Logger.hpp"

#include <fstream>

class FileLogger {
public:
    FileLogger();

private:
    std::ofstream stream_;
};

#endif //OOP_LOGGING_EXERCISE_FILELOGGER_HPP

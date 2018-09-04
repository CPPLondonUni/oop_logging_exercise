

#ifndef OOP_LOGGING_EXERCISE_FILELOGGER_HPP
#define OOP_LOGGING_EXERCISE_FILELOGGER_HPP

#include "Logger.hpp"

#include <fstream>

class FileLogger : public Logger {
public:
    FileLogger();

    void log_message(const std::string& msg) override;

private:
    std::ofstream stream_;
};

#endif //OOP_LOGGING_EXERCISE_FILELOGGER_HPP

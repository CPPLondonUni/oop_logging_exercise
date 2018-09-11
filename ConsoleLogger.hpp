
#ifndef OOP_LOGGING_EXERCISE_CONSOLE_LOGGER_HPP
#define OOP_LOGGING_EXERCISE_CONSOLE_LOGGER_HPP

#include "Logger.hpp"

class ConsoleLogger : public Logger {
public:
    void log_message(const std::string& msg) override;
};

#endif //OOP_LOGGING_EXERCISE_LOGGER_HPP
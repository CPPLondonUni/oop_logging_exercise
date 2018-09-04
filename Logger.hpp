
#ifndef OOP_LOGGING_EXERCISE_LOGGER_HPP
#define OOP_LOGGING_EXERCISE_LOGGER_HPP

#include <string>

class Logger {
public:
    Logger() = default;

    virtual void log_message(const std::string& msg);
};

#endif //OOP_LOGGING_EXERCISE_LOGGER_HPP

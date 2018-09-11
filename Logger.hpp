
#ifndef OOP_LOGGING_EXERCISE_LOGGER_HPP
#define OOP_LOGGING_EXERCISE_LOGGER_HPP

#include <string>

class Logger {
public:
    virtual void log_message(const std::string& msg) = 0;

    virtual ~Logger() = default;
};

#endif //OOP_LOGGING_EXERCISE_LOGGER_HPP

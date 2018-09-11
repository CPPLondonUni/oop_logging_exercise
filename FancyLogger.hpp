
#ifndef OOP_LOGGING_EXERCISE_FANCY_LOGGER_HPP
#define OOP_LOGGING_EXERCISE_FANCY_LOGGER_HPP

#include <string>

class FancyLogger {
public:
    virtual void log_info(const std::string& msg) = 0;

    virtual void log_warning(const std::string& msg) = 0;

    virtual void log_error(const std::string& msg) = 0;

    virtual ~FancyLogger() = default;
};

#endif //OOP_LOGGING_EXERCISE_FANCY_LOGGER_HPP

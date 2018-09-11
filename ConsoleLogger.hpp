
#ifndef OOP_LOGGING_EXERCISE_CONSOLE_LOGGER_HPP
#define OOP_LOGGING_EXERCISE_CONSOLE_LOGGER_HPP

#include "Logger.hpp"
#include "FancyLogger.hpp"

class ConsoleLogger : public Logger, public FancyLogger {
public:
    void log_message(const std::string& msg) override;
    void log_info(const std::string& msg) override;
    void log_warning(const std::string& msg) override;
    void log_error(const std::string& msg) override;
};

#endif //OOP_LOGGING_EXERCISE_LOGGER_HPP
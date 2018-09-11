
#include "ConsoleLogger.hpp"

#include <iostream>

void ConsoleLogger::log_message(const std::string& msg)
{
    std::clog << msg << '\n';
}

void ConsoleLogger::log_info(const std::string& msg)
{
    std::clog << "INFO: " << msg << '\n';
}

void ConsoleLogger::log_warning(const std::string& msg)
{
    std::clog << "WARNING: " << msg << '\n';
}

void ConsoleLogger::log_error(const std::string& msg)
{
    std::clog << "ERROR: " << msg << '\n';
}
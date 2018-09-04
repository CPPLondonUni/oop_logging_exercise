
#include "Logger.hpp"

#include <iostream>

void Logger::log_message(const std::string& msg)
{
    std::clog << msg << '\n';
}

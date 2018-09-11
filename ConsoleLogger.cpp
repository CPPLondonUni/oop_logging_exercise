
#include "ConsoleLogger.hpp"

#include <iostream>

void ConsoleLogger::log_message(const std::string& msg)
{
    std::clog << msg << '\n';
}

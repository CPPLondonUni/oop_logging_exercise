
#include "ConsoleLogger.hpp"

Logger& get_logger()
{
    // Change this to FileLogger once you have implemented that class
    static ConsoleLogger l;
    return l;
}

void do_something()
{
    get_logger().log_message("Entered the do_something() function");
}

int main()
{
    do_something();
}

#include "ConsoleLogger.hpp"

FancyLogger& get_fancy_logger()
{
    // Change this to FileLogger once you have implemented that class
    static ConsoleLogger l;
    return l;
}

void do_something()
{
    get_fancy_logger().log_info("This is an info message");
    get_fancy_logger().log_warning("This is a warning");
    get_fancy_logger().log_error("This is an error");
}

int main()
{
    do_something();
}
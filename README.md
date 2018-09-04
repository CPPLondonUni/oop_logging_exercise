
# C++ London Uni Logging Exercise #

A common task in complex software is *logging*, recording the actions a program
takes in order to aid debugging.

In this exercise you will use what you have learned about inheritance and
virtual functions to implement a simple logger.

## Exercise 1 ##

You have been provided with a `Logger` class with a single virtual method,
`log_message()`. The implementation of this function simply writes the message
to the console.

Your task is to implement a `FileLogger` class which may be used in place
of a `Logger`, which instead writes the message to a file named "log.txt". To
help you get started, a skeleton class is provided in `FileLogger.hpp`.

Tasks:

 * Make the `FileLogger` class inherit from `Logger`
 
 * Override the `log_message()` method in `FileLogger`
   
   HINT: You can write to a file stream in the same way as you do with a console
   stream such as `std::cout`
   
 * In `main.cpp`, change `Logger` to `FileLogger` on line 7 to try out your
   new implementation. Note that the output file log.txt will be written to the
   *working directory* of your program
   
 * Extension: if you've got time to spare, add a constructor to `FileLogger`
   which allows the user to choose the output file path. If you're feeling
   really fancy and your compiler supports it, try using C++17's
   `std::filesystem` for this
 
 ## Exercise 2 ##
 
 Rather than having a default implementation which writes to the console and
 a derived class which writes to a file, a better design would be to have a
 `Logger` *interface*, with `FileLogger` and `ConsoleLogger` *implementations*.
 
 Tasks:
  
  * Change `Logger` into an *abstract base class*
  
  * Add a new class `ConsoleLogger` which implements the `Logger` interface,
    writing the provided message to the `std::clog` stream
    
  * Test your `ConsoleLogger` class in `main.cpp`
  
  * What changes did you need to make to the `FileLogger` class to make things
    compile?
  
## Exercise 3 ##

Sadly, our `Logger` interface has proved insufficient for the needs of our
software. Management has asked that we define a new `FancyLogger` interface
which provides multiple log levels:

  * `void log_info(const std::string& msg);`
  * `void log_warning(const std::string& msg);`
  * `void log_error(const std::string& msg);`
  
Unfortunately we have millions of lines of code which use the existing `Logger`
interface, which we must continue to support. Therefore our implementations must
support both the new `FancyLogger` interface and the legacy `Logger` interface.

Task:
  * Define a new `FancyLogger` interface class with the above abstract functions
  
  * Modify `ConsoleLogger` and `FileLogger` to implement the new interface
  
  * Test the new `FancyLogger` interface in `main.cpp`


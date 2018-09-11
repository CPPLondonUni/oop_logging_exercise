cmake_minimum_required(VERSION 3.2)
project(oop_logging_exercise)

set(CMAKE_CXX_STANDARD 14)

add_executable(oop_logging_exercise main.cpp Logger.hpp
               FileLogger.cpp FileLogger.hpp
               ConsoleLogger.cpp ConsoleLogger.hpp)
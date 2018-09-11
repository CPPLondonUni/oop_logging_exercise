
#include "FileLogger.hpp"

FileLogger::FileLogger()
    : stream_("log.txt")
{}

void FileLogger::log_message(const std::string& msg)
{
    stream_ << msg << '\n';
}

void FileLogger::log_info(const std::string& msg)
{
    stream_ << "INFO: " << msg << '\n';
}

void FileLogger::log_warning(const std::string& msg)
{
    stream_ << "WARNING: " << msg << '\n';
}

void FileLogger::log_error(const std::string& msg)
{
    stream_ << "ERROR: " << msg << '\n';
}
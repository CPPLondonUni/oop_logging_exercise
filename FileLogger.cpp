
#include "FileLogger.hpp"

FileLogger::FileLogger()
    : stream_("log.txt")
{}

void FileLogger::log_message(const std::string& msg)
{
    stream_ << msg << '\n';
}

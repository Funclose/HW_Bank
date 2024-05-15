#include "bankAccaunt.h"
#include "exception.h"

ArgumentException::ArgumentException(const std::string& msg) : message(msg) {}

const char* ArgumentException::what() const noexcept
{
    return message.c_str();
}

InsufficientFundsException::InsufficientFundsException(const std::string& msg) : message(msg) {}

const char* InsufficientFundsException::what() const noexcept
{
    return message.c_str();
}






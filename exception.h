#pragma once
#include <string>
class ArgumentException : public std::exception 
{
private:
    std::string message;
public:
    ArgumentException(const std::string& msg);

    const char* what() const noexcept override;
    
};


class InsufficientFundsException : public std::exception
{
private:
    std::string message;
public:
    InsufficientFundsException(const std::string& msg);

    const char* what() const noexcept override;
    
    
};


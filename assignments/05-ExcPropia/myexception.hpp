#pragma once

#include <exception>

class myexception : public std::exception {
public:
    virtual const char* what() noexcept;
};
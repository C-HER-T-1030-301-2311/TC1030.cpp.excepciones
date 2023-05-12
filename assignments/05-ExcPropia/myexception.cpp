#include "myexception.hpp"

const char* myexception::what() noexcept {
    return "My Exception happened";
}
#include "aritmetica.hpp"

double division(int a, int b)
{
    if ( b == 0)
    {
        throw "Division por cero !";
    }

    return a / b;
}
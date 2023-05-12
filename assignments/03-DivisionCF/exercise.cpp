#include <iostream>

#include "aritmetica.hpp"

int main() 
{
  int x{1};
  int y{0};
  int z{0};

  try {
    z = division(x,y);

    std::cout << "El valor de z es: " << z << "\n";
  } 
  catch (const char* msg) {
    std::cerr << msg << "\n";
  }
  catch(...)
  {
    std::cerr << "Excepcion no capturada por el programa \n";
  }

  return 0;
}

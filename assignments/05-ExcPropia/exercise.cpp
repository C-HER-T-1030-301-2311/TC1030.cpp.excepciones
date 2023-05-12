#include "myexception.hpp"
#include <iostream>


int main() 
{
  myexception myexc;
  try {
    throw myexc;

  }
  catch (myexception& e) {
    std::cout << "Mi excepcion: " << e.what() << "\n";
  }
  return 0;
}

#include <iostream>

int main() 
{
  int x{1};
  int y{0};
  int z{0};

  try {
    if (y==0)
      throw "División por 0, no válido!";
    z = x / y;

    std::cout << "El valor de z es: " << z << "\n";
  } catch (const char* msg) {
    std::cerr << msg << "\n";
  }
  return 0;
}

#include <iostream>
#include <vector>

int main() 
{
  std::vector<int> numeros;

  numeros.push_back(12);

  try {
    std::cout << numeros.at(3) << "\n";
  }
  catch(std::out_of_range &ex)
  {
    std::cout << "Ocurrió una excepcion: " << ex.what() << "\n";
  }
  return 0;
}

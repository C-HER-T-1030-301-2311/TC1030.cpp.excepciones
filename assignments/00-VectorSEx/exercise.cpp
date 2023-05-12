#include <iostream>
#include <vector>

int main() 
{
  std::vector<int> numeros;

  numeros.push_back(12);

  std::cout << numeros.at(3) << "\n";

  return 0;
}

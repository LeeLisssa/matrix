#include <iostream>
#include "matrix.h"
int main() 
{
  size_t n = 0, m = 0;
  std::cin >> m >> n;
  if (!std::cin || std::cin.eof()) 
  {
    std::cerr << "wrong cin\n";
    return 1;
  }
  int** matrix = nullptr;
  try 
  {
    matrix = createMatrix(m, n);
  }
  catch (const std::bad_alloc & e)
  {
    deleteMatrix(matrix, m);
    std::cerr << "out of memory\n";
    return 1;
  }
  inMatrix(matrix, m, n);
  if (!std::cin || std::cin.eof())
  {
    std::cerr << "wrong cin\n";
    return 1;
  }
  outMatrix(matrix, m, n);
  deleteMatrix(matrix, m);
}

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
  Matrix matrix(m, n);
  matrix.inMatrix(std::cin);
  matrix.outMatrix(std::cout);
  matrix.fillMatrix(10);
  matrix.outMatrix(std::cout);
}

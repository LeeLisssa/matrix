#include <iostream>
#include "matrix.h"
int main() {
  size_t n = 0, m = 0;
  std::cin >> m >> n;
  int **t = createMatrix(m, n);
  deleteMatrix(t, m, n);
}

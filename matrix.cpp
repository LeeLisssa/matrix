#include "matrix.h"
#include <iostream>
void inMatrix(int **t, size_t m, size_t n) {
  for (size_t i = 0; i < m; i++) {
    for (size_t j = 0; j < n; i++) {
      std::cin >> t[i][j];
    }
  }
}
void outMatrix(const int * const * t, size_t m, size_t n) {
  for (size_t i = 0; i < m; i++) {
    std::cout << t[i][j];
    for (size_t j = 1; j < n; j++) {
      std::cout << " " << t[i][j];
    }
    std::cout << "\n";
  }
}
void deleteMatrix(int **t, size_t m) {
  for (size_t i =0; i < m; i++) {
    delete [] t[i];
  }
  delete []t;
}


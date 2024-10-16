#include <iostream>
int **createMatrix(size_t m, size_t n);
void dt(int **t, size_t m, size_t n);
int main() {
  size_t n = 0, m = 0;
  std::cin >> m >> n;
  int **t = createMatrix(m, n);
  dt(t, m, n);
}

#ifndef MATRIX_H
#define MATRIX_H
#include <cstddef>
class Matrix
{
public:
  Matrix(size_t m, size_t n);
  Matrix(const Matrix & other);
  ~Matrix();
  size_t getM();
  size_t getN();
  void fillMatrix(int num);
  void inMatrix(std::istream & in);
  void outMatrix(std::ostream & out);
private:
  int **matrix;
  size_t m;
  size_t n;
};
#endif

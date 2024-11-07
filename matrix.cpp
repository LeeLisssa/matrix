#include "matrix.h"
Matrix::Matrix(size_t m, size_t n)
{
  matrix = new int * [m];
  for (size_t i = 0; i < m; i++)
  {
    matrix[i] = new int[n];
  }
}
Matrix::Matrix(const Matrix& other)
{
  matrix = new int * [other.m];
  for (size_t i = 0; i < other.m; i++)
  {
    matrix[i] = new int[other.n];
    for (size_t j = 0; j < other.n; j++)
    {
      matrix[i][j] = other.matrix[i][j];
    }
  }
}
Matrix::~Matrix()
{
  for (size_t i = 0; i < m; i++)
  {
    delete[] matrix[i];
  }
  delete[] matrix;
}
size_t Matrix::getM()
{
  return m;
}
size_t Matrix::getN()
{
  return n;
}
void Matrix::fillMatrix(int num)
{
  for (size_t i = 0; i < m; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      matrix[i][j] = num;
    }
  }
}
void Matrix::inMatrix(std::istream& in)
{
  for (size_t i = 0; i < m; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      in >> matrix[i][j];
    }
  }
}
void Matrix::outMatrix(std::ostream& out)
{
  for (size_t i = 0; i < m; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      out << matrix[i][j];
    }
    out << "\n";
  }
}

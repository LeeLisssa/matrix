#ifndef MATRIX_H
#define MATRIX_H
#include <cstddef>
void inMatrix(int** matrix, size_t m, size_t n);
void outMatrix(const int* const* matrix, size_t m, size_t n);
void deleteMatrix(int** matrix, size_t m);
int** createMatrix(size_t m, size_t n);
#endif

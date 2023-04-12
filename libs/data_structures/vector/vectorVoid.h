#ifndef VECTOR_VECTORVOID_H
#define VECTOR_VECTORVOID_H

#include <stdio.h>

typedef struct vectorVoid {
    void *data;             // указатель на нулевой элемент вектора
    size_t size;            // размер вектора
    size_t capacity;        // вместимость вектора
    size_t baseTypeSize;    // размер базового типа:
                            // например, если вектор хранит int -
                            // то поле baseTypeSize = sizeof(int)
                            // если вектор хранит float -
                            // то поле baseTypeSize = sizeof(float)
} VectorVoid;

VectorVoid createVector(size_t n, size_t baseTypeSize);

void reserve(VectorVoid *v, size_t newCapacity);

void clear(VectorVoid *v);

void shrinkToFit(VectorVoid *v);

void deleteVector(VectorVoid *v);

#endif //VECTOR_VECTORVOID_H

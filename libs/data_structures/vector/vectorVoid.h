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



#endif //VECTOR_VECTORVOID_H

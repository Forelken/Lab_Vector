#include <malloc.h>
#include <stdbool.h>

#include "vectorVoid.h"

// Коммит второй

VectorVoid createVectorV(size_t n, size_t baseTypeSize) {
    int *data = (void *) malloc(baseTypeSize * n);
    if (data == NULL) {
        fprintf(stderr, "Wrong value: capacity");
        exit(1);
    }
    return (VectorVoid) {
            data,
            0,
            n,
            baseTypeSize
    };
}

void reserveV(VectorVoid *v, size_t newCapacity) {
    if (newCapacity == 0) v->data = NULL;
    v->data = (void *) realloc(v->data ,v->baseTypeSize * newCapacity);
    if (v->data == NULL) {
        fprintf(stderr, "Wrong value: newCapacity = %llu", newCapacity);
        exit(1);
    }
    v->capacity = newCapacity;
    if (newCapacity < v->size) v->size = newCapacity;
}

void clearV(VectorVoid *v) {
    v->size = 0;
}

void shrinkToFitV(VectorVoid *v) {
    v->capacity = v->size;
}

void deleteVectorV(VectorVoid *v) {
    free(v->data);
    v->size = 0;
    v->capacity = 0;
}


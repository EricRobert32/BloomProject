#include "bitarray.h"
#include "stdlib.h"


bitarray *create_bitarray(int m) {
    bitarray *b = (bitarray *) malloc(sizeof(bitarray));
    b->array = (unsigned char *) calloc(m, sizeof(unsigned char));
    b->size = m;
    return b;
}

void free_bitarray(bitarray *a) {
    free(a->array);
    free(a);
}

void set_bitarray(bitarray *a, int pos) {
    a->array[pos] = 1;
}


void reset_bitarray(bitarray *a, int pos) {
    a->array[pos] = 0;
}

int get_bitarray(bitarray *a, int pos) {
    return a->array[pos];
}

void clear_bitarray(bitarray *a) {
    int i;
    for (i = 0; i < a->size; ++i) {
        a->array[i] = 0;
    }
}
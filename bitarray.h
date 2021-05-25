#ifndef __BITARRAY__
#define __BITARRAY__

typedef struct _bitarray{
    unsigned char *array;
    int size;
} bitarray;

bitarray *create_bitarray(int m);

void free_bitarray(bitarray *a);

void set_bitarray(bitarray *a, int pos);

void reset_bitarray(bitarray *a, int pos);

int get_bitarray(bitarray *a, int pos);

void clear_bitarray(bitarray *a);

#endif
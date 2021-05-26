#ifndef __FILTER__
#define __FILTER__

#include "bitarray.h"

typedef struct  _filter {
    bitarray *array;
    int k;
    int *hash;
} filter;

/**
 * Create filter with a bit array  of size m and k hash value in hash
 * @param m
 * @param k
 * @return
 */
filter *create_filter(int m, int k);

void free_filter(filter *f);

void hash(filter *f, char *str, unsigned hashes[]);

void add_filter(filter *f, char *str);

int is_member_filter(filter *f, char *str);

#endif
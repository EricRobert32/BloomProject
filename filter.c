#include "filter.h"
#include <stdlib.h>
#include "stdio.h"
#include "bitarray.h"
#include <time.h>
#include <string.h>
#include <math.h>

filter *create_filter(int m, int k) {
    int i;
    srand(time(NULL));
    filter *f = (filter *) malloc(sizeof(filter));
    f->array = create_bitarray(m);
    f->k = k;
    f->hash = calloc(k, sizeof(int));
    for (i = 0; i < k; i++) {
        f->hash[i] = (rand() % 253) + 2;
    }
    return f;
}

void free_filter(filter *f) {
    free_bitarray(f->array);
    free(f->hash);
    free(f);
}


void hash(filter *f, char *str, unsigned hashes[]) {
    int i, j, tmp, len;
    len = strlen(str);
    for (i = 0; i < f->k; i++) {
        tmp = 0;
        for (j = 0; j < len; j++) {
            tmp += str[j] + pow(f->hash[i], len - (j + 1));
            tmp = tmp % f->array->size;
        }
        /*hashes[tmp] = 1;*/
/*
        printf("%d \n",tmp);
*/
        hashes[i] = tmp;
    }
}

void add_filter(filter *f, char *str) {
    int i;
    unsigned hashes[f->k];

    hash(f,str,hashes);
    for (i = 0; i < f->k ;++i) {
        set_bitarray(f->array, hashes[i]);
    }
    /*len = strlen(str);
    for (i = 0; i < f->k; i++) {
        tmp = 0;
        for (j = 0; j < len; j++) {
            tmp += str[j] + pow(f->hash[i], len - (j + 1));
            tmp = tmp % f->array->size;
        }*/

}

int is_member_filter(filter *f, char *str) {
    int i;
    unsigned hashes[f->k];
    hash(f, str, hashes);
    for (i = 0; i < f->k; i++) {
        if (0 == get_bitarray(f->array, hashes[i])) {
            return 0;
        }
    }
    return 1;
}
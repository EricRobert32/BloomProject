#include <stdlib.h>
#include <stdio.h>
#include "filter.h"

int main(int argc, char* argv[]){
    printf("Hello, World!\n");
    filter *f = create_filter(30,8);
    unsigned int *hashes = (unsigned int*) calloc(30,sizeof (unsigned int));
    hash(f,"test",hashes);

    int i;
    for ( i = 0; i < 30; ++i) {
        fprintf("%c ",hashes[i]);
    }

    free_filter(f);
    free(hashes);
    printf("test\n");
    return 0;
}

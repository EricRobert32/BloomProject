#include <stdio.h>
#include "filter.h"

int main(int argc, char* argv[]){
    printf("Hello, World!\n");
    filter *f = create_filter(5000000,8);
    free_filter(f);
    printf("test\n");
    return 0;
}

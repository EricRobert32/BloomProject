#include <stdlib.h>
#include <stdio.h>
#include "filter.h"
#include "hashtable.h"

int main(int argc, char* argv[]){
    if(argc != 5 ){
        printf("this programme need 4 argument");
        return 1;
    }
    int m,k;
    m = atoi(argv[1]);
    k = atoi(argv[2]);
    filter *f = create_filter(m,k);
    Hashtable *h = createHashtable(m);

    FILE* file = fopen(argv[3], "r");
    char tmp[50] = "";
    while(fgets(tmp, 50, file) != NULL){
        add_filter(f, tmp);
        addWord(h,tmp);
    }
    fclose(file);

    FILE* file2 = fopen(argv[4], "r");
    char tmp2[50] = "";
    long test = 0;
    int number_of_falstrue = 0;
    while(fgets(tmp2, 50, file2) != NULL){
        test++;
        if(is_member_filter(f,tmp2) == 1 && hashWord(h,tmp2) == 0){
            number_of_falstrue++;
        }
    }
    fclose(file2);
    freeHashTable(h);
    free_filter(f);
    printf("Pour une valeur de m : %d et un valeur de k : %d il y a %f faux postif\n",m,k,(float)number_of_falstrue/(float)test);
    return 0;
}

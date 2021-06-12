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
    tmp[50] = "";
    int number_of_falstrue = 0;
    while(fgets(tmp, 50, file2) != NULL){
        if(is_member_filter(f,tmp) == 1 && hashWord(h,tmp) == 0){
            number_of_falstrue++;
        }
    }
    fclose(file2);
    freeHashTable(h);
    free_filter(f);
    printf("Pour une valeur de m : %d et un valeur de k : %d il y a %d faux bon réponse",m,k,number_of_falstrue);
    return 0;
}

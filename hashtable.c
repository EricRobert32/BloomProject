#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashtable.h"


List createList(char* word){
    List l = (List)malloc(sizeof(Node));
    l->word = malloc(strlen(word)+1);
    strcpy(l->word, word);
    l->next = NULL;
    return l;
}

void freeList(List l){
    if(l == NULL){
        return;
    }
    free(l->word);
    if(l->next != NULL){
        freeList(l->next);
    }
    free(l);
}

List findWord(List l, char* word){
    if(strcmp(l->word,word) ==0){
        return l;
    }
    else if(l->next == NULL){
        return NULL;
    }
    else{
        return findWord(l->next, word);
    }
}

void insertWord(List *l, char* word){
    List tmp = createList(word);
    tmp->next = *l;
    (*l) = tmp;
}

int lengthOfList(List l){
    if(l == NULL){
        return 0;
    }
    else if(l->next == NULL){
        return 1;
    }
    else{
        return 1+lengthOfList(l->next);
    }
}

int hashWord(Hashtable *h, char* word){
    int i, toreturn;
    i =0;
    toreturn =0;
    while (word[i] != '\0'){
        toreturn += ((1+i)*word[i]);
        i++;
    }
    if(toreturn <0){
        toreturn =0;
    }
    return toreturn % h->nb_pack;
}

Hashtable *createHashtable(int NB_PACK){
    Hashtable *h = malloc(sizeof(Hashtable));
    h->nb_pack = NB_PACK;
    h->size =0;
    h->bucket = calloc(NB_PACK,sizeof(List));
    return h;
}

void addWord(Hashtable *h, char* word){
    List f;
    int hash;
    hash = hashWord(h, word);
    if(h->bucket[hash] == NULL){
        h->bucket[hash] = createList(word);
        h->size++;
        return;
    }
    f = findWord(h->bucket[hash], word);
    if(f == NULL){
        insertWord(&(h->bucket[hash]), word);
        h->size++;
    }
}

int sizeOfTable(Hashtable *h){
    return  h->size;
}

void freeHashTable(Hashtable *h){
    int i;
    for(i=0; i<h->nb_pack; i++){
        freeList(h->bucket[i]);
    }
    free(h->bucket);
    free(h);
}

int hash_find(Hashtable *h, char* word){
    int hash = hashWord(h, word);
    if(findWord(h->bucket[hash],word) == NULL){
        return 0;
    }
    return 1;
}
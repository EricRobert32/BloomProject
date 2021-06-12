#ifndef __HASHTABLE__
#define __HASHTABLE__

typedef struct node{
    char* word;
    struct node* next;
}Node, *List;

typedef struct hashtable{
    int size;
    int nb_pack;
    struct node** bucket;
} Hashtable;

Node *createList(char* word);
void freeList(List l);
List findWord(List l, char* word);
void insertWord(List *l, char* word);
int lengthOfList(List l);
Hashtable *createHashtable(int NB_PACK);
void addWord(Hashtable *h, char* word);
int hashWord(Hashtable *h, char* word);
int sizeOfTable(Hashtable *h);
void freeHashTable(Hashtable *h);
int hash_find(Hashtable *h, char* word);

#endif
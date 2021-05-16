typedef struct  _filter {

} filter;

filter *create_filter(int m, int k);

void free_filter(filter *f);

void hash(filter *f char *str, unsigned hashes[]);

void add_filter(filter *f, char *str);

int is_member_filter(filter *f, char *str);

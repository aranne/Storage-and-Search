#ifndef btree_h
#define btree_h

#include <btree_node.h>

extern FILE* fp;    
extern long root;   /* offset of root node */

typedef struct {
    int promoted;   /* promoted key */
    long newchild;  /* new child's offset */
} result_t;

void init_btree(const char* filename, const char* order_s);
void close_btree(void);
boolean search(int key, boolean print);
void add(int key);
void print_btree(void);

#endif
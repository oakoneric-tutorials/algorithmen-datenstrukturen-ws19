/* 
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze 
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws19
------------------------------------------------------------------------------
Aufgabe 2
------------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>

struct node {int key; struct node *left; struct node *right;};

/*  gleiche datenstruktur:
typedef struct node *tree;
typedef struct node {int key; tree left; tree right;} node;
(achtung: versteckte pointer - datentypänderungen im gesamten programm notwendig)
*/

int count(struct node *t, int k) {
    
}

struct node *baz(struct node *s, struct node *t) {
    
}

struct node *cons(int key, struct node *l, struct node *r) {
    struct node *t = malloc(sizeof(*t));
    t->key   = key;
    t->left  = l;
    t->right = r;
    return t;
}

void printTree(struct node *t, int depth) {
    if (t) {
        for (int i = 0; i < depth; i++) printf("\t");
        printf("%d\n", t->key);
        printTree(t->left, depth+1);
        printTree(t->right, depth+1);
    }
}


int main() {
     
    struct node *s = cons(2, cons(3, cons(2, NULL, NULL), cons(4, NULL, NULL)), cons(1, NULL, NULL));
    struct node *t = cons(2, cons(2, NULL, NULL), cons(3, NULL, NULL));
      
    printTree(s, 0);
    printTree(t, 0);
    
    struct node *x = baz(s, t);
    printf("\nbaz(s, t):\n");
    printTree(x, 0);
    
    return 0;
}
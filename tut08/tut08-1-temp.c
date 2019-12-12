/*
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws19
------------------------------------------------------------------------------
Aufgabe 1
------------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>

/*
anmerkung: in dieser uebung werden wir nicht mehr mit typedefs arbeiten und somit immer explizit den anfang einer liste oder eines baumes als pointer notieren. ausserdem haben wir keine abkuerzungen mehr fuer datentypen (wie z.b. list oder tree) sondern muessen immer struct element oder struct node schreiben
*/

struct element { int key; struct element *next; }   ;   /* listenelemente */

struct node { int key; struct node *left, *right; } ;   /* baumknoten */

void append(struct element **lp, int n){    /* haengt hinten an eine liste an */
    
}

void treeToList_rec(struct node *t, struct element **lp){
    
}

struct element *treeToList(struct node *t){
    
}

struct node *cons(int key, struct node *l, struct node *r) {
    struct node *t = malloc(sizeof(*t));
    t->key   = key;
    t->left  = l;
    t->right = r;
    return t;
}

void printTree(struct node *t, int depth) { /* ausgabe eines baumes */
    if (t) {
        for (int i = 0; i < depth; i++) printf("\t");
        printf("%d\n", t->key);
        printTree(t->left, depth+1);
        printTree(t->right, depth+1);
    }
}

void printList(struct element *l) { /* ausgabe einer liste */
    printf("[");
    while(l) {                      /* solange liste nicht leer ist (listpointer nicht null*/
        printf("%d", l->key);       /* ausgabe des keys */
        if(l->next) printf(", ");   /* wenn noch weitere elemente existieren (next-pointer nicht null */
        l = l->next;                /* pointer weiterschalten um restliste auszugeben */
    }
    printf("]\n");
}


int main() {

    /* hier mal ein paar beispielbäume - ein eeetwas größerer und die anderen beiden aus aufgabe 2 */

    struct node *monster = cons(2, cons(3, cons(2, cons(4, cons(6, NULL, NULL), cons(3, NULL, NULL)), cons(6, NULL, NULL)), cons(1, cons(7, cons(6, NULL, NULL), cons(3, NULL, NULL)), cons(9, cons(7, NULL, NULL),cons(8, NULL, NULL)))), cons(1, cons(6, cons(2, NULL, NULL), cons(5, NULL, NULL)), cons(3, cons(4, NULL, NULL), cons(1, NULL, NULL) )));    struct node *s = cons(2, cons(3, cons(2, NULL, NULL), cons(4, NULL, NULL)), cons(1, NULL, NULL));    struct node *t = cons(2, cons(2, NULL, NULL), cons(3, NULL, NULL));

    printf("\n==============================================\n");
    printTree(t, 0);
    printf("\n");
    printList(treeToList(s));

    printf("\n==============================================\n");
    printTree(s, 0);
    printf("\n");
    printList(treeToList(t));

    printf("\n==============================================\n");
    printTree(monster, 0);
    printf("\n");
    printList(treeToList(monster));

    return 0;
}
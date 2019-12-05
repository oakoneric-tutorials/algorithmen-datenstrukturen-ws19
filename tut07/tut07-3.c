/* 
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze 
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws19
------------------------------------------------------------------------------
Aufgabe 3
------------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct element *list;
struct element { int value; list next; };

int sum_rec(list l) {
    if (l == NULL) return 0; /* nach letztem element nichts mehr addieren */
    
    return l->value + sum_rec(l->next); 
    /* l->value ist eine Kurzform für (*l).value
    nehme immer einen key und addiere die summe der restliste */
}

int sum_it(list l) {
    int result = 0;
    
    while (l != NULL) {
        result += l->value; /* result = result + l -> value */
        l = l->next;        /* schalte "start"zeiger ein element weiter */
    }
    
    return result;
}


/* 
problem: beim löschen des ersten listenelements geht der zugriff auf die liste verloren
ausweg: pointer auf pointer - erster pointer hält stets listenanfang fest
*/

void rmEvens_rec(list *lp) { /* *lp heißt: wir übergeben einen pointer (list pointer) */
    if (lp == NULL || *lp == NULL) return;
    /* keine liste oder liste leer */
    
    if ((*lp)->value % 2 == 0) {
        list tmp = *lp;     
        /* speicherung des zu löschenden elements (um speicher dann zu befreien, sonst speicherleichen) */
        *lp = (*lp)->next;
        /* weiterschalten des ersten pointers */
        free(tmp);
        /* speicher des zu löschenden elements befreien */ 
    } else {
        lp = &(*lp)->next;
        /* startpointer weiterschalten - kein löschen notwendig */
    }
    
    rmEvens_rec(lp);    /* verfahre so weiter mit der restlichen liste */
}

void rmEvens_it(list *lp) {
    while (lp != NULL && *lp != NULL) {
        if ((*lp)->value % 2 == 0) {
            list tmp = *lp;
            *lp = (*lp)->next;
            free(tmp);
        } else {
            lp = &(*lp)->next;
        }
    }
}



list cons(int n, list next) {	 /* erstellen einer liste (hilfsfunktion) */
    list l = malloc(sizeof(*l)); /* reserviere speicher für ein listenelement */
    l->value = n;                /* trage key ein */
    l->next = next;              /* pointer auf nächstes listenelement bzw. restliste */
    return l;
}

void printList(list l) {        /* ausgabe einer liste */
    printf("[");            
    while(l) {                /* solange liste nicht leer ist (listpointer nicht null*/
        printf("%d", l->value);     /* ausgabe des keys */
        if(l->next) printf(", ");   /* wenn noch weitere elemente existieren (next-pointer nicht null */
        l = l->next;                /* pointer weiterschalten um restliste auszugeben */
    }
    printf("]\n");
}



int main() {
    /* erstelle eine liste [3,6,2,1,4] */
    list l = cons(3, cons(6, cons(2, cons(1, cons(4, NULL)))));
    
    printf("sum_rec(l): %d\n", sum_rec(l));
    printf("sum_it(l): %d\n\n", sum_it(l));
    
    printf("l: ");
    printList(l);
    
    rmEvens_rec(&l);
    printf("l: ");
    printList(l);
    
    return 0;
}
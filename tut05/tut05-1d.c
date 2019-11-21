/* 
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze 
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws19
------------------------------------------------------------------------------
Aufgabe 1 d
------------------------------------------------------------------------------
*/

#include <stdio.h>
#define LEN 1001

/*
Idee: Sieb des Erathostenes (siehe https://de.wikipedia.org/wiki/Sieb_des_Eratosthenes)
Wir legen einen Array an - der Index i beschreibt die Zahl i und der Wert an Stelle i ist 1 gdw. i eine Primzahl ist, sonst 0
Sodann streichen wir alle Vielfachen einer noch nicht markierten Zahl von der Liste potenzieller Primzahlen
*/

int main(){
    int sieve[LEN];
    int i,j;
    
    /* 0 und 1 sind keine Primzahlen */
    sieve[0] = 0;
    sieve[1] = 0;
    
    /* wir markieren jede Zahl >= 2 als potenzielle Primzahl */
    for(i=2; i<LEN; i=i+1){
        sieve[i] = 1;
    }
    
    for(i=2; i<LEN; i=i+1){
        if (sieve[i] != 0) {
                /* i ist noch nicht gestrichen */
                for (j=2*i ; j<LEN ; j=j+i){
                    sieve[j] = 0; /* streiche alle Vielfachen von i */
                }
        }
    }
    
    /* Ausgabe aller Primzahlen */
    for (i=0; i<LEN; i=i+1){
        if (sieve[i] != 0) {
            printf("%i ", i);
        }
    }
    
    return 0;
}
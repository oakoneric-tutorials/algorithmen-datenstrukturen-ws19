/* 
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze 
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws19
------------------------------------------------------------------------------
Aufgabe 2 a 
------------------------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int i;
    for(i=0; i<25; i=i+1){
        printf("%d\n", fib_rec(i));
    }
}
/* 
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze 
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws19
------------------------------------------------------------------------------
Aufgabe 1
------------------------------------------------------------------------------
*/

#include <stdio.h>



int main() {
    int x, y, a;
    printf("\nAckermannfunktion\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    
    a = ack(x,y);
    
    printf("ack(%i,%i)=%i.\n", x, y, a);
    
    return 0;
}
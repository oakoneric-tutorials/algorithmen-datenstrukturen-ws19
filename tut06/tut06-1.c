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

int ack(int x, int y){
    int a;
    if ((x == 0) && (y >= 0))
        return y + 1;
    else if ((x > 0) && (y == 0)) 
        return ack(x-1, 1);
    else if ((x > 0) && (y > 0)){
        a = ack(x, y-1);
        return ack(x-1, a);
    }
}


int main() {
    int x = 0, y = 0, a;
    printf("\nAckermannfunktion\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    
    a = ack(x,y);
    
    printf("ack(%i,%i)=%i.\n", x, y, a);
    
    return 0;
}
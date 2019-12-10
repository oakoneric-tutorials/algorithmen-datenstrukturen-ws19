/* 
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze 
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws19
------------------------------------------------------------------------------
Aufgabe 1 c
------------------------------------------------------------------------------
*/

#include <stdio.h>

int main(){
    int i,j,n;
    scanf("%d", &n);
    
    for ( i=1; i<=n ; i=i+1 ) {
        for ( j=1; j<=n ; j=j+1 ) {
            printf("%4d", (i*j) % n);
        }
        printf("\n");
    }
    return 0;
}
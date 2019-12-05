/* 
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze 
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws19
------------------------------------------------------------------------------
Aufgabe 2
------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h> 
/* math.h benötigt für fmin-funktion
siehe auch https://de.wikipedia.org/wiki/Math.h */ 

int skalarProdukt(int a[], int m, int b[], int n) {
    int k, i, sum;
    
    k = m;
    if (n < m) k = n;
    /* alternativ: k = fmin(m,n); benötigt #include <math.h> */
    
    sum = 0;
    for (i=0; i<k; i++) sum = sum + a[i] * b[i]; 
    
    return sum;
}

int main() {
    
    int a[5] = {1,2,3,4,5};
    int b[3] = {2,4,6};
    /* Erwartung: skalarProdukt = 1*2 + 2*4 + 3*6 = 2 + 8 + 18 = 28 */
    int m = (int) sizeof(a) / sizeof(a[1]);
    int n = (int) sizeof(b) / sizeof(b[1]);
    
    printf("Skalarprodukt: %d\n", skalarProdukt(a,m,b,n));

    return 0;
}
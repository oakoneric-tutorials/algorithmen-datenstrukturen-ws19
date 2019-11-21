/*
------------------------------------------------------------------------------
ALGORITHMEN & DATENSTRUKTUREN
Eric Kunze 
Github: https://github.com/oakoneric/algorithmen-datenstrukturen-ws19
------------------------------------------------------------------------------
Aufgabe 2 b 
------------------------------------------------------------------------------
*/

#include <stdio.h>

int M(int n);

int F(int n) {
    if (n == 0) return 1;
    return n - M(F(n-1));
}

int M(int n) {
    if (n == 0) return 0;
    return n - F(M(n-1));
}

int main() {
    int x = 4;

    printf("F(%d) = %d\n", x, F(x));
    printf("M(%d) = %d\n", x, M(x));

    return 0;
}
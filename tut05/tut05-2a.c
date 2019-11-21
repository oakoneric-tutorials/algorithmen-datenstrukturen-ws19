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

int fib_rec(int n) {
    if (n <= 1) return n;
    return fib_rec(n-1) + fib_rec(n-2);
}

int fib_tail_helper(int n, int p, int q) {
    if (n == 0) return p;
    return fib_tail_helper(n - 1, q, p + q);
}

int fib_tail(int n) {
    return fib_tail_helper(n, 0, 1);
}

int fib_it(int n) {
    int p = 0, q = 1, result;

    if (n == 0) return 0;
    if (n == 1) return 1;

    for (int i = 2; i <= n; ++i) {
        result = p + q;
        p = q;
        q = result;
    }

    return result;
}

int main() {
    int i;
    for (i = 0; i<26; i=i+1)
        printf(" %d\n", fib_rec(i));
    return 0;
}

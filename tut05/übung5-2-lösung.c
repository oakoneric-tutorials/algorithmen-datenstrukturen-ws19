#include <stdio.h>

///////////////////
//// AUFGABE 2 ////
///////////////////

void swap(int *x, int *y) {
    int temp = *x;
    
    if (*x % 2 == 1) (*y)++;
    
    *x = *y;
    *y = temp;
}

int main() {
    int x, y;
    
    printf("Zahl x: "); scanf("%d", &x);
    printf("Zahl y: "); scanf("%d", &y);
    
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    
    return 0;
}
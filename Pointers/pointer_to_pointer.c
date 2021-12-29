#include <stdio.h>

int main() {
    
    int x = 5;
    int *ptr = &x;
    *ptr = 6;
    int **q = &ptr;
    int ***r = &q;

    printf("Value at 'x': %d\n", *ptr);
    printf("Address of 'x': %d\n", *q);
    printf("Value of 'x': %d\n", **q);
    printf("Address of 'x': %d\n", **r);
    printf("Value of 'x': %d\n", ***r);

    ***r  = 10;

    printf("Value of x: %d\n", x);

    **q = *ptr + 2;

    printf("Value of x: %d\n", x);

    return 0;
}
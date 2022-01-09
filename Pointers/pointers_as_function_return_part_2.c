#include <stdio.h>
#include <stdlib.h>

int* add(int* a, int* b) {
    int* c = (int*)malloc(sizeof(int));
    *c = *a + *b;
    return c;
}

int main() {
    
    int x = 2, y = 3;
    int* ptr = add(&x, &y);

    printf("Sum = %d\n", *ptr);

    return 0;
}
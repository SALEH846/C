#include <stdio.h>

// NOTE: This program demosntrates the concept of call by value

int add(int* a, int* b) {
    int c = (*a) + (*b);

    printf("Address of variable 'a': %d\n", a);
    printf("Address of variable 'b': %d\n", b);

    return c;
}

int main() {
    
    int x = 1, y = 4;

    int z = add(&x, &y);
    // The value of pointer variable 'a' which is a local variable of function 'add' will hold the address of
    // variable 'x' which is a local variable of function 'main'
    // The value of pointer variable 'b' which is a local variable of function 'add' will hold the address of
    // variable 'y' which is a local variable of function 'main'

    printf("Sum = %d\n", z);

    printf("Address of variable 'x': %d\n", &x);
    printf("Address of variable 'y': %d\n", &y);

    return 0;
}

// 'a' and 'x' are not separate variables, rather 'a' is just a pointer to integer which points towards variable 'x'
// 'b' and 'y' are not separate variables, rather 'b' is just a pointer to integer which points towards variable 'y'
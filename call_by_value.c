#include <stdio.h>

// NOTE: This program demosntrates the concept of call by value

int add(int a, int b) {
    int c = a + b;

    printf("Address of variable 'a': %d\n", &a);
    printf("Address of variable 'b': %d\n", &b);

    return c;
}

int main() {
    
    int x = 1, y = 4;

    int z = add(x, y);
    // The value of variable 'x' which is a local variable of function 'main' will get copied into the variable 'a'
    // which is a local variable of function 'add'
    // The value of variable 'y' which is a local variable of function 'main' will get copied into the variable 'b'
    // which is a local variable of function 'add'

    printf("Sum = %d\n", z);

    printf("Address of variable 'x': %d\n", &x);
    printf("Address of variable 'y': %d\n", &y);

    return 0;
}

// 'a' and 'x' are separate variables
// 'b' and 'y' are separate variables
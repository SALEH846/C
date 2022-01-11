#include <stdio.h>

void increment(int *num) {
    // This is also called 'call by reference'
    *num = *num + 1;
}

int main() {
    
    int a = 10;
    increment(&a);
    printf("The variable 'a' after incrementing is: %d\n", a);

    return 0;
}
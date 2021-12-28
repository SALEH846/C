#include <stdio.h>

int main() {

    int a = 10;
    int *p1 = &a; // 'p1' stores the address of 'a'
    printf("%d\n", a);
    printf("%d\n", *p1); // '*p1' will return the value stored in variable 'a'. This is called dereferencing.
    
    return 0;
}
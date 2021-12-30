#include <stdio.h>

int main() {

    int a = 1025;
    int *ptr = &a;

    printf("The size of 'int' is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", ptr, *ptr);

    // Void pointer - Generic pointer
    void *p = ptr;
    printf("Address = %d", ptr);
    // void pointer can store the address of variable of any data type
    // we can't perfrom arithmetic and derefencing operations on void pointers

    return 0;
}
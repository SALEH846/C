#include <stdio.h>
#include <stdlib.h>

// NOTE: heap has nothing to do heap data structure, both are separate things
// NOTE: stack in application memory is implemented in the same way as stack data structure

// NOTE: if 'malloc' is unable to find any memory in heap it will return null

int main() {
    
    int a; // will go on stack because it is a local variable
    
    int *p; // a pointer to integer
    // This will assign a block of memory equal to the size of 'int' data type in heap
    // 'p' contains the address of the first byte of the block of memory assigned in heap
    p = (int*) malloc(sizeof(int)); // we have done typecasting because by default 'malloc' return a pointer to void
    // but 'p' is pointer to integer
    *p = 10; // putting data in heap
    free(p); // clean up the memory so helps us to prevent unnecessary use of memory

    // For array
    int size_of_array = 20;
    int *ptr_array;
    ptr_array = (int*) malloc(size_of_array*sizeof(int));
    ptr_array[0] = 1;
    ptr_array[11] = 21;
    *(ptr_array+3) = 34;
    printf("%d\n", ptr_array[0]);
    printf("%d\n", *(ptr_array + 11));
    printf("%d\n", ptr_array[3]);

    return 0;
}
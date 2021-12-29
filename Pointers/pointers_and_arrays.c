#include <stdio.h>

int main() {
    
    int arr[] = {18005, 18028, 18035};
    int *ptr = arr; // The variable 'arr' basically holds the address of the first byte of the first 'int' of the array.

    // arr++ => it is invalid
    // ptr++ => this is valid and will point to the second 'int' in the array

    for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        printf("The element at %d index of 'arr' is: %d\n", i, *(ptr+i));
    }

    return 0;
}
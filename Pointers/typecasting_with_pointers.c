#include <stdio.h>

int main() {
    
    int a = 1025;
    int *ptr_int = &a;

    // 'int' is of 4 bytes but pointer to 'int' holds the address of the last byte in this case 00000001
    // the data type of pointer will tell the compiler how many bytes to look for when dereferencing, collectively
    // the left most byte is of sign i.e. + or -

    printf("Size of 'int' is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", ptr_int, *ptr_int);
    printf("Address = %d, value = %d\n", (ptr_int + 1), *(ptr_int + 1)); // will return garbage

    // 1025 in binary is 00000000 00000000 00000100 00000001

    char *ptr_char = (char*)ptr_int; // typecasting
    printf("Size of 'char' is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n", ptr_char, *ptr_char); // will point to last byte so will return 1
    printf("Address = %d, value = %d\n", (ptr_char + 1), *(ptr_char + 1)); // will point to second last byte so
    // will return 4

    return 0;
}
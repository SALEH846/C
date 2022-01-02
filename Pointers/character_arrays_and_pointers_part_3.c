#include <stdio.h>

void print(const char* c) { // c pointer to char is read-only
    // c[0] = 'A'; // will throw error
    while(*c != '\0') {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int main() {
    
    char *c_ptr = "Hello World";
    // When we initialize a string like this in C then it is stored as a string contant and hence cannot be modified
    printf("%s\n", c_ptr);
    printf("%c\n", c_ptr[1]);
    printf("%c\n", *c_ptr);

    // c_ptr[1] = 'i'; // this will not work

    char C[20] = "Welcome to C";
    print(C);

    return 0;
}
#include <stdio.h>

// NOTE: function pointers can be passed as function arguments and later used these function pointers can be used
// for callbacks

void hello() {
    printf("Hello\n");
}

void B(void (*ptr_to_func)()) {
    ptr_to_func();
}

int main() {
    
    // First, create a pointer of function 'B' and also create a pointer of function 'hello' and then pass pointer
    // of function 'hello' to the pointer of function 'B'
    void (*ptr_func_B)(void (*)()) = B;
    void (*ptr_func_hello)() = hello;
    ptr_func_B(ptr_func_hello);

    void (*ptr_func_hello_2)() = &hello; // Pointer to function 'hello'
    B(ptr_func_hello_2);

    // Same as above two blocks
    B(hello); //because the name of function also holds the address of that function. More precisely, the address of
    // the statement of that function 

    return 0;
}
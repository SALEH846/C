#include <stdio.h>

// NOTE: pointers does not have to always point to variables
// They can also point to functions

// Function is a set of instructions which are stored in a contiguous block of memory in the code segment of
// application's memory
// The address of the function or entry point of the function is the address of the first instruction.

int add(int a, int b) {
    return a + b;
}

void hello() {
    printf("Hello\n");
}

void greetByName(char* name) {
    printf("Hello, %s\n", name);
}

int main() {
    
    // Function pointer syntax
    // <function return type> (*<variable name for pointer>)(<all the arguments' data types>)
    int (*ptr_func)(int, int);
    // NOTE: if we do not use parantheses around pointer name such as 'int *ptr_func(int, int);'
    // Then this mean we declaring a new function named 'ptr_func' which returns pointer to 'int'
    ptr_func = &add;
    // '&' is optional here

    int c = (*ptr_func)(2, 3); // De-referencing and executing the function 'add'
    printf("Sum = %d\n", c);

    void (*ptr_hello)() = &hello;
    ptr_hello();

    void (*ptr_greet)(char*) = &greetByName;
    char* my_name = "Muhammad Saleh";
    char friend_name[] = "Haseeb Bukhari";
    ptr_greet(my_name);
    ptr_greet(friend_name);

    return 0;
}
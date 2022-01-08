#include <stdio.h>
#include <stdlib.h>

// NOTE: We cannot return back the address of variable of called function back in the calling function

int* add(int* a, int* b) {
    // 'a' and 'b' are local variables of 'add' and are pointers to 'int'
    int c = (*a) + (*b);
    // 'c' is a local variable of 'add' and is of 'int' data type
    return &c;
    // This function will return pointer to integer
}

int main() {
    
    int a = 2, b = 4;
    // 'a' and 'b' are local variables of 'main' and are of 'int' data type
    int* ptr = add(&a, &b);
    // 'ptr' is a local variables of 'main' and is a pointer to 'int'
    printf("Sum = %d\n", *ptr);

    return 0;
}

// When program starts, function 'main' is invoked and it starts executing line by line. The 'main' function 
// also got assigned a stack frame in the stack of application's memory but when the compiler reaches the line
// in which 'add' function is called then it pauses the further execution of 'main' function and invokes 'add'
// function. The function 'add' also got assigned a stack frame in the stack of application's memory and all of
// it's local variables are initialized inside of this stack frame but when the execution of 'add' function is
// completed then the stack frame assigned to function 'add' is destroyed and that's why the 'ptr' pointer
// in 'main' which holds the address of this variable 'c' od 'add' function returns us the garbage or in some
// cases compiler will give us an error like this 'function returns address of local variable'


// So, we cannot use pointers returned by the called fucntion in the calling function because the reason defined
// above. But if the pointer returned by the function is not a local variable of that function but rather it is
// global variable or dynamically allocated variable in the heap section of application's memory then we can use
// pointer returned by the function effectively.
// The example implementation of this is in part 2
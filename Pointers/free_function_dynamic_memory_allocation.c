#include <stdio.h>
#include <stdlib.h>

// NOTE: Any piece of memory that is dynamically allocated lives until the lifetime of the program (while the
// program is executing), it can be freed forcefully by using 'free' function in C for better memory management

int main() {
    
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    // int array[size]; // this will throw an error
    // because we need to know the size of array at compile time while the value of size is entered by the user
    // at run time

    // Instead, we need to initialize the array dynamically
    int* array = (int*)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        *(array + i) = i * i;
    }
    printf("Array is initialized\n");

    printf("----------After Initialization----------\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    printf("Array is freed\n");

    printf("----------After the array is freed----------\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
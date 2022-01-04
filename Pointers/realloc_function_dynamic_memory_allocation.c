#include <stdio.h>
#include <stdlib.h>

// NOTE: We can change the size of the memeory block we have already been allocated by using 'realloc'. We can
// either increase or decrease the size. It will increase or reduce the size of the current memory block if possible
// or it will assign a new memory block of the changed size and copy previous data into it.

int main() {
    
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    // int array[size]; // this will throw an error
    // because we need to know the size of array at compile time while the value of size is entered by the user
    // at run time

    // Instead, we need to initialize the array dynamically
    int* array = (int*)calloc(size, sizeof(int));

    for(int i = 0; i < size; i++) {
        *(array + i) = i * i;
    }

    printf("----------After first Initialization----------\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Let's say we want to change the size of the previous memory block to the new size
    int new_size;
    printf("Enter the new size of array: ");
    scanf("%d", &new_size);
    array = (int*)realloc(array, new_size * sizeof(int));

    for(int i = 0; i < new_size; i++) {
        *(array + i) = i * i * i;
    }

    printf("----------After Changing the size----------\n");
    for(int i = 0; i < new_size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // The following statement is equivalent to 'free(array)'
    // array = (int*)realloc(array, 0);

    // The following statement is equivalent to 'int* array = (int*)malloc(size * sizeof(int));'
    // array = (int*)realloc(NULL, size * sizeof(int));

    return 0;
}
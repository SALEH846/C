#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    // int array[size]; // this will throw an error
    // because we need to know the size of array at compile time while the value of size is entered by the user
    // at run time

    // Instead, we need to initialize the array dynamically
    int* array = (int*)malloc(size * sizeof(int));

    printf("----------Before Initialization----------\n");
    // In case of 'malloc', before initialization there is garbage present in the assigned memory
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    for(int i = 0; i < size; i++) {
        *(array + i) = i * i;
    }
    printf("\n");

    printf("----------After Initialization----------\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
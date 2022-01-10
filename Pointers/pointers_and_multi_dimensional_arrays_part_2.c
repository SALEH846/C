#include <stdio.h>

int main() {

    int arr_2d[2][3] = {
        {2, 3, 6},
        {4, 5, 8}
    };

    // Because this is a pointer to first element of 'arr_2d' which is a 1-d array of 1*3 shape
    int (*ptr_2d)[3] = arr_2d;

    printf("------------------\n");
    printf("%d\n", arr_2d);
    printf("%d\n", arr_2d[0]);
    printf("%d\n", (*arr_2d));
    printf("%d\n", (*(*(arr_2d))));

    printf("------------------\n");
    // Accessing into the second dimension
    printf("%d\n", *(*(arr_2d + 1) + 2)); // => 8

    printf("------------------\n");
    // Accessing into the second dimension
    // Because we have 1-d arrays in the second dimension, therefore we will get the address of the first element   
    printf("%d\n", *(arr_2d + 1)); // address of the first element of the sencond array

    return 0;
}
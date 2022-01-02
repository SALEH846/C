#include <stdio.h>

int main() {
    
    int arr_3d[3][2][2] = {
        {
            {2, 5},
            {7, 9}
        },
        {
            {3, 4},
            {6, 1}
        },
        {
            {0, 8},
            {11, 13}
        }
    };

    // Because this is a pointer to first element of 'arr_3d' which is a 2-d array of 2*2 shape
    int (*ptr)[2][2] = arr_3d;

    printf("------------------\n");
    printf("%d\n", arr_3d);
    printf("%d\n", ptr);
    printf("%d\n", *arr_3d);
    printf("%d\n", arr_3d[0]);
    printf("%d\n", &arr_3d[0][0]);
    printf("%d\n", &arr_3d[0][0][0]);

    printf("------------------\n");
    // Accessing into the third dimension
    printf("%d\n", *(*(*(arr_3d + 0) + 0) + 0)); // => 2
    printf("%d\n", arr_3d[0][0][0]); // => 2
    printf("%d\n", *(*(*(arr_3d + 1) + 0) + 1)); // => 4
    printf("%d\n", arr_3d[1][0][1]); // => 4
    printf("%d\n", *(*(*(arr_3d + 2) + 1) + 0)); // => 11
    printf("%d\n", arr_3d[2][1][0]); // => 11

    printf("------------------\n");
    // Accessing into the second dimension
    // Because we have 1-d arrays in the second dimension, therefore we will get the address of the first element
    printf("%d\n", *(arr_3d[1] + 1));
    printf("%d\n", *(*(arr_3d + 1) + 1)); // same as above

    return 0;
}
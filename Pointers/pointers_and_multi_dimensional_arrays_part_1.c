#include <stdio.h>

// NOTE: for 2-D arrays       
// B[i][j] = *(B[i] + j)
//         = *(*(B + i) + j)

int main() {
    
    int arr2d[2][3] = { {2, 3, 6}, {4, 5, 8} };
    
    printf("-------------------\n");
    printf("%d\n", arr2d);
    printf("%d\n", arr2d+1); // will be 12 bytes farther from above address because arr2d+1 is arr2d[1]

    printf("-------------------\n");
    printf("%d\n", arr2d[1]);
    printf("%d\n", arr2d[1][1]);

    printf("-------------------\n");
    printf("%d\n", *arr2d);
    printf("%d\n", *(arr2d+0));
    printf("%d\n", *(*(arr2d+0)+0));
    printf("%d\n", *(*(arr2d+1)+2));

    return 0;
}
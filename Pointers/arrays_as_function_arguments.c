#include <stdio.h>

int sumOfElements(int* A, int size) {
    int i, sum = 0;
    printf("Function sumOfElements------Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for(i = 0; i < size; i++) {
        sum += A[i];
    }
    return sum;
}

int main() {
    
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = sumOfElements(A, size);
    printf("Sum of all the elements is: %d\n", total);
    printf("Function main------Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));

    return 0;
}

// How to pass arrays as function arguments?

// 1-D array
// int A[2] = {1, 2}; => 1-d array
// void func_for_1d(int *A)
// OR  
// void func_for_1d(int A[]) 

// 2-D array
// int B[2][3] = {{1, 2, 6}, {3, 4, 5}}; => 2-d array
// void func_for_2d(int (*B)[3])
// OR  
// void func_for_2d(int B[][3]) 
// can pass array of shape [5][3]
// cannot pass array of shape [2][4]

// 3-D array
// int C[3][2][2] = ... => 3-d array
// void func_for_3d(int (*C)[2][2])
// OR
// void func_for_3d(int C[][2][2])
// can pass array of shape [5][2][2]
// cannot pass array of shape [3][4][2]
#include <stdio.h>
#include <math.h>

int comapre(int a, int b) {
    if (a > b) return -1;
    return 1;
}

int abs_comapre(int a, int b) {
    if (abs(a) > abs(b)) return 1;
    return -1;
}

int bubbleSort(int* arr, int n, int (*ptr_to_func)(int, int)) {
    int i, j ,temp;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n-1; j ++) {
            if (ptr_to_func(arr[j], arr[j+1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {

    int i, A[] = {3, 2, 1, 5, 6, 4};
    bubbleSort(A, 6, comapre);
    for(i = 0; i < 6; i++) printf("%d ", A[i]);

    printf("\n");

    // Sorting using absolute comaprison
    int j, B[] = {-31, 22, -1, 50, -6, 4};
    bubbleSort(B, 6, abs_comapre);
    for(j = 0; j < 6; j++) printf("%d ", B[j]);

    return 0;
}
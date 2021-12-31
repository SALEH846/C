#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    
    int num1 = 10;
    int num2 = 20;
    
    printf("--------Before Swaping------------\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // Swaping variables
    swap(&num1, &num2);

    printf("--------Before Swaping-----------\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
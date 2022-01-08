#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
    int A = *((int*)a); // typecasting to int* and getting value
    int B = *((int*)b);
    return A-B;
}

int main() {
    
    int j, B[] = {-31, 22, -1, 50, -6, 4};
    qsort(B, 6, sizeof(int), compare); // 'qsort' is a library function included in 'stdlib'
    for(j = 0; j < 6; j++) printf("%d ", B[j]);

    return 0;
}
#include <stdio.h>

int main() {
    
    int a = 10;
    int *ptr = &a;

    double b = 10.8;
    double *ptr_double = &b;

    // We can increment or decerement a pointer
    // let's if a pointer 'p1' to some 'int' is 2002 then after incrementing 'p1' by 1 i.e. 'p1 + 1' will equal to
    // to 2006 because in most modern computers 'int' is of 4 bytes so it will start pointing to the byte which is
    // 4 bytes upwards from the byte to which it is currntly pointing.
    // let's say if we subtraction i.e. 'p1 - 1' then the result will be 1998. The logic is same as above.
    // And for 'double' if we do addition i.e. 'p1 + 1' then the result will be 2010 because the 'double' is generally
    // of 8 bytes

    printf("~~~~~~~~~~~~~~~~~~~~For integer~~~~~~~~~~~~~~~~~~~\n");
    printf("The size of 'int' is: %d bytes\n", sizeof(int));
    printf("----------------Before Addition----------------\n");
    printf("ptr=%d\n", ptr);
    printf("----------------After Addition----------------\n");
    printf("ptr=%d\n", ptr+1);

    printf("~~~~~~~~~~~~~~~~~~~~For double~~~~~~~~~~~~~~~~~~~\n");
    printf("The size of 'double' is: %d bytes\n", sizeof(double));
    printf("----------------Before Subtraction----------------\n");
    printf("%d\n", ptr_double);
    printf("----------------After Subtraction----------------\n");
    printf("%d\n", ptr_double-1);
    return 0;
}
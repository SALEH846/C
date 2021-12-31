#include <stdio.h>
#include <string.h> // All the functions of this module assume that all strings are null terminated

// RULE: A string in C has to be terminated with a null character i.e. '\0'

int main() {
    
    // Not null terminated
    char c0[4];
    c0[0] = 'J';
    c0[1] = 'O';
    c0[2] = 'H';
    c0[3] = 'N';
    printf("-----------Not null terminated------------\n");
    printf("%s\n", c0);
    printf("length = %d\n", strlen(c0));

    // Null terminated
    char c1[5];
    c1[0] = 'J';
    c1[1] = 'O';
    c1[2] = 'H';
    c1[3] = 'N';
    c1[4] = '\0';
    printf("-----------Null terminated------------\n");
    printf("%s\n", c1);
    printf("length = %d\n", strlen(c1));

    // Null terminated --- will work fine even if the size of array is very large and string is short
    char c2[20];
    c2[0] = 'J';
    c2[1] = 'O';
    c2[2] = 'H';
    c2[3] = 'N';
    c2[4] = '\0';
    printf("-----------Null terminated------------\n");
    printf("%s\n", c2);
    printf("length = %d\n", strlen(c2));

    printf("-------------------\n");

    // NOTE: In C string literals are double quotation marks

    char str0[20] = "Muhammad Saleh"; // This must be in one line
    printf("%s\n", str0);

    // The following is invalid
    // char str1[20];
    // str1 = "Muhammad Saleh";

    char str2[] = "Haseeb Bukhari"; // This is valid
    printf("%s\n", str2);

    // Another way to initialize strings using character arrays
    char c3[5] = {'J', 'o', 'h', 'n', '\0'};
    printf("%s\n", c3);

    char c4[6] = "Hello";
    char* char_ptr = c4;
    printf("%s\n", char_ptr);
    printf("%c\n", char_ptr[1]);
    printf("%c\n", *(char_ptr+1));
    char_ptr[1] = 'i';
    printf("%s\n", char_ptr);

    return 0;
}

// NOTE: Arrays are always passed to a function by reference
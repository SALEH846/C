#include <stdio.h>

void print(char* c) {
    printf("%s\n", c);
}

void print1(char* c) {
    int i = 0;
    while(c[i] != '\0') {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}

void print2(char* c) {
    int i = 0;
    while(*(c+i) != '\0') {
        printf("%c", *(c+i));
        i++;
    }
    print("\n");
}

void print3(char* c) {
    while(*c != '\0') {
        printf("%c", *c);
        c++;
    }
}

int main() {
    
    char c0[] = "Hello";
    print(c0);

    char c1[6] = "World";
    print1(c1);

    char c2[6] = "Saleh";
    print2(c2);

    char c3[] = "Haseeb";
    print3(c3);

    return 0;
}
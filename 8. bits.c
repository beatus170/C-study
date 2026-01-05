#include <stdio.h>

int main(){

        int a = 5;
        int b = 3;

        int or_result = a | b;
        int and_result = a & b;

        printf("Value of a(5) : binary 0101\n");
        printf("Value of b(5) : binary 0011\n");

        printf("Bitwise OR (a | b) result : %d\n", or_result);
        printf("Bitwise And (a & b) result : %d\n", and_result);

        return 0;
}
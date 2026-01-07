#include <stdio.h>

int main(){

        int a = 10;
        int b = 12;
        int result = a ^ b;

        printf("Value of a : %d (Binary 1010)\n", a);
        printf("Value of b : %d (Binary 1100)\n", b);
        printf("Result of a^b : %d (Binary 0110)\n", result);

        int original = result ^ b;

        printf("Result ^ b : %d (Returns to original a)\n", original);

        return 0;
}
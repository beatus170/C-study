#include <stdio.h>

int main(){

        int num = 5;

        int left_shifted = num << 1;
        int right_shifted = num >> 1;

        printf("original number: %d (Binary 0101)\n", num);
        printf("Left shifted (<<1): %d (Binary 1010) > Equals 5 * 2\n", left_shifted);

        printf("Right shifted (>>1): %d (Binary 0010) > Equals 5 / 2\n", right_shifted);

        return 0;
}
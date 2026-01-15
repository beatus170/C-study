/*
 * File: array_sum.c
 * Description: Calculating the sum and average of an array.
 */

#include <stdio.h>

int main() {

        int expanses[5] = {1200, 2500, 800, 3000, 1500};
        int sum = 0;
        float  average;

        for (int i = 0; i < 5; i++) {

                sum += expanses[i];
        }

                average = (float) sum / 5;

                printf("Total expanses: %d\n", sum);
                printf("Average expanses: %.2f\n", average);

                return 0;
}
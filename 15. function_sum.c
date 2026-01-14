/**
 * Function: calculate_sum
 * -----------------------
 * Calculates the sum of numbers from 1 to a given limit.
 * * limit: the number up to which we want to sum
 * returns: the total sum
 */

#include <stdio.h>

int calculate_sum(int limit) {

        int i = 1;
        int sum = 0;

        while ( i <= limit ) {

                sum += i;
                i++;
        }
                return sum;
}

        int main () {

                int target = 10;
                int result = 0;

                result = calculate_sum(target);

                printf("The sum from 1 to %d is %d\n", target, result);

                return 0;
        }
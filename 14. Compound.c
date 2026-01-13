/*
 * Program: Compound Interest Calculator
 * Description: Calculates the future value of an investment using compound interest.
 * Author: Gemini
 */

#include <stdio.h>
#include <math.h>

int main() {

        double principal;
        double rate;
        int years;
        double amount;

        printf("Enter the principal amount: ");
        scanf("%lf", &principal);

        printf("Enter the interest rate(e.g.0.05): ");
        scanf("%lf", &rate);

        printf("Enter the number of the years: ");
        scanf("%d", &years);

        amount = principal * pow ((1 + rate), years);

        printf("\n_____Result_____\n");
        printf("After %d years, your investment will grow to: %.2f\n", years, amount);
        printf("Total interested earned : %.2f\n", amount - principal);

        return 0;
}
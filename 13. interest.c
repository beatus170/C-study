#include <stdio.h>

/*
 * Program: Simple Interest Calculator
 * Purpose: Calculate final amount based on principal, rate, and time.
 */

int main() {

        float principal, rate, time, interest, total;

        printf("Enter the principal amount : ");
        scanf("%f", &principal);

        printf("Enter the annual interest rate(in %%) : ");
        scanf("%f", &rate);

        printf("Enter the time (in yeares) : ");
        scanf("%f", &time);

        interest = (principal * rate * time)/100;
        total = principal + interest;

        printf("\n______Result______\n");
        printf("Calculated Interest : %.2f\n", interest);
        printf("Total amount after %.1f years : %.2f\n", time, total);

        return 0;
}
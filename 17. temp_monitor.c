/*
 * Project: Embedded Temperature Control System
 * Purpose: This program monitors the temperature from a virtual sensor 
 * and controls a cooling fan based on a safety threshold.
 */

#include <stdio.h>

int main() {
int currentTemp;

        const int safety_limit = 70;


        printf("--- Embeded System : Monitoring started ---\n");
        printf("Please enter the current sensor temperature: ");
        scanf("%d", &currentTemp);

        if(currentTemp >= safety_limit) {

                printf("\n[Alert] Overheating detected! temperature: %d C\n", currentTemp);
                printf("[Action] High voltage signal sent to Coolong fan: ON\n");

        } else {
                printf("\n[Status] Temperature is within normal range : %d C\n", currentTemp);
                printf("[Action] Cooling fan : OFF\n");
        }
                return 0;
}
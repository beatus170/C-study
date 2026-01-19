/*
 * Project: Continuous System Monitor
 * Purpose: This program simulates an embedded system that monitors 
 * a sensor value indefinitely using a while loop.
 */

#include <stdio.h>

int main(){

        int sensorValue;
        int cycleCount = 1;

        while(1) {

                printf("\n[Cycle %d] Reading sensor data...\n", sensorValue);
                printf("Enter the sensor value (Enther the -1 to shutdown system): ");
                scanf("%d", &sensorValue);

                if(sensorValue == -1) {
                        printf("Suttimg down the system...Good bye\n");
                        break; }

                if(sensorValue > 100) {
                        printf("[Warning] High value detected! taking action...\n");
                } else {
                        printf("[stable] system is running normally.\n");
                }

                cycleCount ++;
        }

        return 0;
}
/* Program: EmployeeManager.c 
/ Purpose: To manage employee data using structures (struct). */

#include <stdio.h>
#include <string.h>

struct Employee {

        int id;
        char name [30];
        double salary;

};

        int main() {

                struct Employee emp1;

                emp1.id = 1001;
                strcpy(emp1.name, "Alice");
                emp1.salary = 65000000.0;

                printf("----Employ record----\n");
                printf("ID      : %d\n", emp1.id);
                printf("Name    : %s\n", emp1.name);
                printf("salary  : %.0f KRW\n", emp1.salary);
                printf("---------------------\n");

                return 0;
        }

    
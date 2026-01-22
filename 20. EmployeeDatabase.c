/* Program: EmployeeDatabase.c 
/ Purpose: To manage multiple employee records using an array of structures. */


#include <stdio.h>
#include <string.h>

#define Max_Employees 3

struct Employee {

        int id;
        char name[30];
        double salary;
};

int main(){

        struct Employee list[Max_Employees];
        double total_payroll = 0;

        printf("------- Employee Data Entry -------");

        for (int i = 0; i < Max_Employees; i++) {

                printf("Entering Data for employee #%d\n", i+1);
                printf("ID : ");
                scanf("%d", &list[i].id);

                printf("name : ");
                scanf("%s", list[i].name);

                printf("Monthly Salary(KRW) : ");
                scanf("%lf", &list[i].salary);

                total_payroll += list[i].salary; }

        printf("\n ------- Payroll Report ------- \n");
        printf("%-10s %-15s %-15s\n", "ID", "Name", "Salary");
        printf("--------------------------------\n");

        for (int i = 0; i < Max_Employees; i++) {

                printf("%-10d %-15s %-15.0f\n", list[i].id, list[i].name, list[i].salary);}

        printf("--------------------------------\n");
        printf("Total Monthly Payroll: %.0f\n", total_payroll);

        return 0;
}
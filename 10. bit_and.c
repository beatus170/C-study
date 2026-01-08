#include <stdio.h>

int main(){

        int num;

        printf("Enter a numer to check (even or odd):  ");

        scanf("%d", &num);

        if (num & 1 ) {

                printf("%d is an ODD number.\n", num);

        } else {

                printf("%d is an Even  number.\n", num);
        }

        return 0;
}
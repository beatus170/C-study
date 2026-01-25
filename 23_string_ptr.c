// Program: StringTraversal - Using a pointer to walk through a character array

#include <stdio.h>

int main(){

        char message[] = "Hello";
        char *p = message;

        printf(" --- string traversal using pointer ---\n\n");

        while (*p != '\0') {

                printf("Character: %c, Address: %p\n", *p, (void*)p);
                p++;

        }

        return 0;
}
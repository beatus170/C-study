// Program: DynamicArray - Allocating memory for an array at runtime using malloc

#include <stdio.h>
#include <stdlib.h>

int main () {

        int size;
        int *arr;

        printf("Enter the number of elements: ");
        scanf("%d", &size);

        arr = (int*)malloc(size*sizeof(int));

        if (arr == NULL) {

                printf("Memory allocation is failed\n");
                return 1;
                }

        for (int i = 0; i < size ; i++ ) {

                printf("Enter the value of element %d: ", i);
                scanf("%d", &arr[i]);

                }

        printf("\n ----Displaying Daynamic Array ---\n");

        for (int i = 0; i < size; i++) {

                printf("arr[%d] = %d\n", i, arr[i]);

                }

        free(arr);

        printf("\nMemory has successfully freed\n");

        return 0;

}
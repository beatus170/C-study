#include <stdio.h>

int main() {

	int dan;
	int i;

	printf("Enter a number for the multiplication table: ");
	scanf("%d", &dan);

	printf("\n---Multiplication Table for %d---\n", dan);

	for ( i = 1; i <= 9; i++) {

		printf("%d x %d = %d\n", dan, i, dan * i);
}
	printf("\n(Press Enter to exit...)\n");

	while(getchar() !='\n'){;} 
	getchar(); 

	return 0;

}


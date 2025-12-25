#include <stdio.h>

int main() {

	int sales;
	int cost;
	int profit;
	int a;

	while(1) {

	printf("\nInput Sales : ");
	scanf("%d", &sales);

	printf("Input Cost : ");
	scanf("%d", &cost);

	profit = sales - cost;

	printf("Profit is %d Won.\n", profit);

	printf("\nPress 0 to Exit: ");
	scanf("%d", &a);

	if( a == 0 ) {
		break;
	} else continue;

	}	

	return 0;

}




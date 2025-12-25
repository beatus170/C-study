#include <stdio.h>

int main() {

	int sales;
	double margin_ratio;
	double profit;

	printf("Input Sales Amount: ");
	scanf("%d",&sales);

	printf("Input Margin Ratio (e.g., 0.15 for 15%%): ");
	scanf("%lf", &margin_ratio); // lf : long Float 
				     
        profit = sales * margin_ratio;

	printf("Calculated Profit is %.2f\n", profit);


	printf("press enter key to exit...");

	getchar(); // Clear input buffer: the first enter (scanf)

	getchar(); // Wait for key press: enter

	return 0;

}



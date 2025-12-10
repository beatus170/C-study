#include <stdio.h>

int main() {

	double income;
	double tax;
	double net_income;

	printf("Input your income: ");
	scanf("%lf", &income);

	if (income > 3000) {

		tax = income * 0.1;
		printf(">> Taxable logic applied.\n");
	} else {
		tax = 0.0;
		printf(">> Tax-free logic applied.\n");
	}

	net_income = income - tax;

	printf("----------------------------------\n");
	printf("Income       : %.2f\n", income);
	printf("Tax          : %.2f\n", tax);
	printf("Met Income   : %.2f\n", net_income);
	printf("----------------------------------\n");

	printf("Press Enter to exit...");

	getchar(); //clear buffer
	getchar(); // wait

	return 0;
}


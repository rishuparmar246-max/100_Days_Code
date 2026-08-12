
#include <stdio.h>

int main(void) {
	int a, b;
	if (scanf("%d %d", &a, &b) != 2) return 0;

	int sum = a + b;
	int diff = a - b;
	int prod = a * b;

	if (b != 0) {
		int quot = a / b;
		printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quot);
	} else {
		printf("Sum=%d, Diff=%d, Product=%d, Quotient=undefined\n", sum, diff, prod);
	}

	return 0;
}

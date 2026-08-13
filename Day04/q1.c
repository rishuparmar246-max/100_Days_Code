#include <stdio.h>

int main(void)
{
	int a, b;

	if (scanf("%d %d", &a, &b) != 2) {
		return 0;
	}

	/* Swap without using a third variable (using arithmetic) */
	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swap: %d %d\n", a, b);
	return 0;
}


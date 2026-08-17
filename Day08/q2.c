#include <stdio.h>

int main(void) {
	int a, b, c;
	if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;

	if (a >= b && a >= c)
		printf("Largest is %d\n", a);
	else if (b >= a && b >= c)
		printf("Largest is %d\n", b);
	else
		printf("Largest is %d\n", c);

	return 0;
}

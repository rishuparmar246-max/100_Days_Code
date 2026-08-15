#include <stdio.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1) return 0;
	if (n >= 0) {
		if (n == 0)
			printf("Zero\n");
		else
			printf("Positive\n");
	} else {
		printf("Negative\n");
	}
	return 0;
}


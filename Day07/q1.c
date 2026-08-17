#include <stdio.h>

int main(void) {
	int year;
	if (scanf("%d", &year) != 1)
		return 0;

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
		printf("Leap year\n");
	} else {
		printf("Not a leap year\n");
	}

	return 0;
}


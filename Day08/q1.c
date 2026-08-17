#include <stdio.h>
#include <ctype.h>

int main(void) {
	int c = getchar();
	if (c == EOF) return 0;

	if (isupper(c))
		printf("Uppercase alphabet\n");
	else if (islower(c))
		printf("Lowercase alphabet\n");
	else if (isdigit(c))
		printf("Digit\n");
	else
		printf("Special character\n");

	return 0;
}

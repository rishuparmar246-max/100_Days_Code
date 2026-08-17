
#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;
	if (scanf(" %c", &ch) != 1)
		return 0;

	char lower = tolower((unsigned char)ch);

	if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
		printf("Vowel\n");
	} else if (lower >= 'a' && lower <= 'z') {
		printf("Consonant\n");
	} else {
		printf("Not an alphabet\n");
	}

	return 0;
}


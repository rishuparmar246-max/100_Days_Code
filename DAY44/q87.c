#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char text[1000];
	int spaces = 0;
	int digits = 0;
	int special = 0;

	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 0;
	}

	for (int index = 0; text[index] != '\0'; index++) {
		unsigned char character = (unsigned char)text[index];

		if (character == ' ') {
			spaces++;
		} else if (isdigit(character)) {
			digits++;
		} else if (character != '\n' && character != '\r') {
			special++;
		}
	}

	printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

	return 0;
}

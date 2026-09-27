#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[1000];

	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 1;
	}

	text[strcspn(text, "\r\n")] = '\0';

	for (size_t index = 0; text[index] != '\0'; index++) {
		unsigned char character = (unsigned char)text[index];

		if (islower(character)) {
			text[index] = (char)toupper(character);
		} else if (isupper(character)) {
			text[index] = (char)tolower(character);
		}
	}

	printf("%s\n", text);
	return 0;
}

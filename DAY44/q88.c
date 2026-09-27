#include <stdio.h>

int main(void)
{
	char text[1000];

	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 0;
	}

	for (int index = 0; text[index] != '\0'; index++) {
		if (text[index] == ' ') {
			text[index] = '-';
		}
	}

	printf("%s", text);

	return 0;
}

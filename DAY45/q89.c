#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[1000];
	char character_input[1000];
	int frequency = 0;

	if (fgets(text, sizeof(text), stdin) == NULL ||
		fgets(character_input, sizeof(character_input), stdin) == NULL) {
		return 1;
	}

	text[strcspn(text, "\r\n")] = '\0';
	character_input[strcspn(character_input, "\r\n")] = '\0';

	for (size_t index = 0; text[index] != '\0'; index++) {
		if (text[index] == character_input[0]) {
			frequency++;
		}
	}

	printf("%d\n", frequency);
	return 0;
}

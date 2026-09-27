#include <stdio.h>

int main(void)
{
	char input[1000];
	int read_index = 0;
	int write_index = 0;

	if (fgets(input, sizeof(input), stdin) == NULL) {
		return 0;
	}

	while (input[read_index] != '\0') {
		char character = input[read_index++];

		if (character != 'a' && character != 'e' && character != 'i' &&
			character != 'o' && character != 'u' && character != 'A' &&
			character != 'E' && character != 'I' && character != 'O' &&
			character != 'U') {
			input[write_index++] = character;
		}
	}

	input[write_index] = '\0';
	printf("%s", input);
	return 0;
}

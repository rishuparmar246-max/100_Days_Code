#include <stdio.h>

int main(void)
{
	char input[1000];
	int seen[26] = {0};
	int index = 0;

	if (fgets(input, sizeof(input), stdin) == NULL) {
		return 0;
	}

	while (input[index] != '\0') {
		char character = input[index++];

		if (character >= 'a' && character <= 'z') {
			int letter_index = character - 'a';

			if (seen[letter_index]) {
				printf("%c\n", character);
				return 0;
			}

			seen[letter_index] = 1;
		}
	}

	printf("-1\n");
	return 0;
}

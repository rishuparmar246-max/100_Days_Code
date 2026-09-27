#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[1000];

	if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
		return 0;
	}

	size_t length = strlen(sentence);
	size_t index = 0;

	while (index < length) {
		if (isspace((unsigned char)sentence[index])) {
			index++;
			continue;
		}

		size_t start = index;
		while (index < length && !isspace((unsigned char)sentence[index])) {
			index++;
		}

		size_t left = start;
		size_t right = index - 1;
		while (left < right) {
			char temporary = sentence[left];
			sentence[left] = sentence[right];
			sentence[right] = temporary;
			left++;
			right--;
		}
	}

	fputs(sentence, stdout);
	if (length == 0 || sentence[length - 1] != '\n') {
		putchar('\n');
	}

	return 0;
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[1000];

	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 0;
	}

	size_t length = strcspn(text, "\n");
	if (text[length] == '\n') {
		text[length] = '\0';
	}

	int is_palindrome = 1;
	for (size_t left = 0, right = length == 0 ? 0 : length - 1;
		 left < right; left++, right--) {
		if (text[left] != text[right]) {
			is_palindrome = 0;
			break;
		}
	}

	if (is_palindrome) {
		printf("Palindrome\n");
	} else {
		printf("Not palindrome\n");
	}

	return 0;
}

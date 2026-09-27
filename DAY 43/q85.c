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

	for (size_t left = 0, right = length == 0 ? 0 : length - 1;
		 left < right; left++, right--) {
		char temp = text[left];
		text[left] = text[right];
		text[right] = temp;
	}

	printf("%s\n", text);
	return 0;
}

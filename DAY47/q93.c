#include <stdio.h>
#include <string.h>

int main(void)
{
	char first[1000];
	char second[1000];
	int frequency[256] = {0};

	if (scanf("%999s%999s", first, second) != 2) {
		return 0;
	}

	if (strlen(first) != strlen(second)) {
		printf("Not anagrams\n");
		return 0;
	}

	for (int index = 0; first[index] != '\0'; index++) {
		frequency[(unsigned char) first[index]]++;
		frequency[(unsigned char) second[index]]--;
	}

	for (int index = 0; index < 256; index++) {
		if (frequency[index] != 0) {
			printf("Not anagrams\n");
			return 0;
		}
	}

	printf("Anagrams\n");
	return 0;
}

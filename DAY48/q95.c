#include <stdio.h>
#include <string.h>

int main(void)
{
	char first[1000];
	char second[1000];

	if (scanf("%999s %999s", first, second) != 2) {
		return 0;
	}

	size_t length = strlen(first);
	if (length == strlen(second)) {
		char doubled[2000];
		strcpy(doubled, first);
		strcat(doubled, first);

		if (strstr(doubled, second) != NULL) {
			puts("Rotation");
			return 0;
		}
	}

	puts("Not rotation");
	return 0;
}
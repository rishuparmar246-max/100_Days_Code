#include <stdio.h>

int main(void)
{
	int firstSize;
	scanf("%d", &firstSize);

	for (int index = 0; index < firstSize; index++)
	{
		int value;
		scanf("%d", &value);
		printf("%d ", value);
	}

	int secondSize;
	scanf("%d", &secondSize);

	for (int index = 0; index < secondSize; index++)
	{
		int value;
		scanf("%d", &value);
		printf("%d", value);

		if (index < secondSize - 1)
		{
			printf(" ");
		}
	}

	return 0;
}

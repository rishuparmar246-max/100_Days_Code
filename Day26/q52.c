#include <stdio.h>

int main(void)
{
	int groups[] = {4, 5, 3, 1};
	int groupCount = sizeof(groups) / sizeof(groups[0]);

	for (int group = 0; group < groupCount; group++)
	{
		for (int star = 0; star < groups[group]; star++)
		{
			printf("*\n");
		}

		if (group < groupCount - 1)
		{
			printf("\n");
		}
	}

	return 0;
}

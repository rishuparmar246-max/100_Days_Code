#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int array[n];
	for (int index = 0; index < n; index++)
	{
		scanf("%d", &array[index]);
	}

	int position;
	scanf("%d", &position);

	if (position < 1 || position > n)
	{
		return 1;
	}

	for (int index = position - 1; index < n - 1; index++)
	{
		array[index] = array[index + 1];
	}

	for (int index = 0; index < n - 1; index++)
	{
		if (index > 0)
		{
			printf(" ");
		}
		printf("%d", array[index]);
	}
	printf("\n");

	return 0;
}

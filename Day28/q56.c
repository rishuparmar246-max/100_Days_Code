#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n <= 0)
	{
		return 0;
	}

	int *array = malloc((size_t)n * sizeof(*array));
	if (array == NULL)
	{
		return 1;
	}

	for (int index = 0; index < n; index++)
	{
		scanf("%d", &array[index]);
	}

	for (int index = 0; index < n; index++)
	{
		printf("%d ", array[index]);
	}

	free(array);
	return 0;
}

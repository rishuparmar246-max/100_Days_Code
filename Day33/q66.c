#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int array[n + 1];
	for (int index = 0; index < n; index++)
	{
		scanf("%d", &array[index]);
	}

	int element;
	scanf("%d", &element);

	int position = n;
	while (position > 0 && array[position - 1] > element)
	{
		array[position] = array[position - 1];
		position--;
	}
	array[position] = element;

	for (int index = 0; index <= n; index++)
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

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

	int position;
	int element;
	scanf("%d %d", &position, &element);

	if (position < 1 || position > n + 1)
	{
		return 1;
	}

	for (int index = n; index >= position; index--)
	{
		array[index] = array[index - 1];
	}
	array[position - 1] = element;

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

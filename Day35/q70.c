#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	if (n <= 0)
	{
		return 0;
	}

	int array[n];
	for (int index = 0; index < n; index++)
	{
		scanf("%d", &array[index]);
	}

	int k;
	scanf("%d", &k);
	k %= n;

	for (int index = 0; index < n; index++)
	{
		int source_index = (index + n - k) % n;
		printf("%d", array[source_index]);

		if (index < n - 1)
		{
			printf(" ");
		}
	}

	printf("\n");
	return 0;
}

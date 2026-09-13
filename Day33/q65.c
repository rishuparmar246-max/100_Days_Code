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

	int target;
	scanf("%d", &target);

	int left = 0;
	int right = n - 1;
	int foundIndex = -1;

	while (left <= right)
	{
		int middle = left + (right - left) / 2;

		if (array[middle] == target)
		{
			foundIndex = middle;
			break;
		}

		if (array[middle] < target)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}

	if (foundIndex == -1)
	{
		printf("-1\n");
	}
	else
	{
		printf("Found at index %d\n", foundIndex);
	}

	return 0;
}

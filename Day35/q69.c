 #include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int value;
	int largest = 0;
	int second_largest = 0;

	for (int index = 0; index < n; index++)
	{
		scanf("%d", &value);

		if (index == 0 || value > largest)
		{
			second_largest = largest;
			largest = value;
		}
		else if (index == 1 || value > second_largest)
		{
			second_largest = value;
		}
	}

	printf("%d\n", second_largest);
	return 0;
}

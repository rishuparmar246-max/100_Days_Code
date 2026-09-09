#include <stdio.h>

int main(void)
{
	int n;
	int positive = 0;
	int negative = 0;
	int zero = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int number;
		scanf("%d", &number);

		if (number > 0)
		{
			positive++;
		}
		else if (number < 0)
		{
			negative++;
		}
		else
		{
			zero++;
		}
	}

	printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);

	return 0;
}

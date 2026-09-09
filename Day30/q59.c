// Q59: Count even and odd numbers in an array.

#include <stdio.h>

int main(void)
{
	int n;
	int even = 0;
	int odd = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int number;
		scanf("%d", &number);

		if (number % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	printf("Even=%d, Odd=%d\n", even, odd);

	return 0;
}

#include <stdio.h>

int power(int base, int exponent)
{
	int result = 1;

	while (exponent > 0)
	{
		result *= base;
		exponent--;
	}

	return result;
}

int main(void)
{
	int number;
	int originalNumber;
	int digits = 0;
	int sum = 0;

	scanf("%d", &number);
	originalNumber = number;

	if (number == 0)
	{
		digits = 1;
	}
	else
	{
		int temp = number;

		while (temp != 0)
		{
			digits++;
			temp /= 10;
		}
	}

	if (number >= 0)
	{
		int temp = number;

		while (temp != 0)
		{
			sum += power(temp % 10, digits);
			temp /= 10;
		}
	}

	if (sum == originalNumber)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
	}

	return 0;
}

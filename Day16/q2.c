#include <stdio.h>

int main(void)
{
	int number;
	int original;
	int reversed = 0;

	scanf("%d", &number);
	original = number;

	while (number > 0)
	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}

	if (original == reversed)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}

	return 0;
}
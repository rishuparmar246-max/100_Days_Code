#include <stdio.h>

int main(void)
{
	char number[1000];
	int frequency[10] = {0};

	scanf("%999s", number);

	for (int index = 0; number[index] != '\0'; index++)
	{
		if (number[index] >= '0' && number[index] <= '9')
		{
			frequency[number[index] - '0']++;
		}
	}

	int mostFrequentDigit = 0;
	for (int digit = 1; digit <= 9; digit++)
	{
		if (frequency[digit] > frequency[mostFrequentDigit])
		{
			mostFrequentDigit = digit;
		}
	}

	printf("%d", mostFrequentDigit);
	return 0;
}

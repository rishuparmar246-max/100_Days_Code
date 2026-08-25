 #include <stdio.h>

int main(void)
{
	int number;
	int binary[32];
	int index = 0;

	scanf("%d", &number);

	if (number == 0)
	{
		printf("0");
		return 0;
	}

	while (number > 0)
	{
		binary[index++] = number % 2;
		number /= 2;
	}

	while (index > 0)
	{
		printf("%d", binary[--index]);
	}

	return 0;
}

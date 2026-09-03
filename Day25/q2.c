#include <stdio.h>

int main(void)
{
	for (int row = 1; row <= 5; row++)
	{
		for (int space = 1; space < row; space++)
		{
			printf(" ");
		}

		for (int star = row; star <= 5; star++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}

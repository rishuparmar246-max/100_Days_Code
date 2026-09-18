#include <stdio.h>

int main(void)
{
	int rows1, columns1, rows2, columns2;
	scanf("%d %d", &rows1, &columns1);

	int first[rows1][columns1];
	for (int row = 0; row < rows1; row++)
	{
		for (int column = 0; column < columns1; column++)
		{
			scanf("%d", &first[row][column]);
		}
	}

	scanf("%d %d", &rows2, &columns2);

	int second[rows2][columns2];
	for (int row = 0; row < rows2; row++)
	{
		for (int column = 0; column < columns2; column++)
		{
			scanf("%d", &second[row][column]);
		}
	}

	if (columns1 != rows2)
	{
		printf("Matrix multiplication is not possible\n");
		return 0;
	}

	for (int row = 0; row < rows1; row++)
	{
		for (int column = 0; column < columns2; column++)
		{
			int sum = 0;
			for (int index = 0; index < columns1; index++)
			{
				sum += first[row][index] * second[index][column];
			}

			if (column > 0)
			{
				printf(" ");
			}
			printf("%d", sum);
		}
		printf("\n");
	}

	return 0;
}

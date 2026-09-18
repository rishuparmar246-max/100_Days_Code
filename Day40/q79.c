#include <stdio.h>

int main(void)
{
	int rows, columns;

	scanf("%d %d", &rows, &columns);

	int matrix[rows][columns];
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < columns; column++)
		{
			scanf("%d", &matrix[row][column]);
		}
	}

	int is_first = 1;
	for (int diagonal = 0; diagonal < rows + columns - 1; diagonal++)
	{
		for (int row = 0; row < rows; row++)
		{
			int column = diagonal - row;
			if (column >= 0 && column < columns)
			{
				if (!is_first)
				{
					printf(" ");
				}
				printf("%d", matrix[row][column]);
				is_first = 0;
			}
		}
	}

	printf("\n");
	return 0;
}

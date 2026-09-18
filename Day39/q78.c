#include <stdio.h>

int main(void)
{
	int rows, columns;

	if (scanf("%d %d", &rows, &columns) != 2 || rows <= 0 || rows != columns) {
		return 1;
	}

	long long diagonal_sum = 0;

	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			int value;
			scanf("%d", &value);

			if (row == column) {
				diagonal_sum += value;
			}
		}
	}

	printf("%lld\n", diagonal_sum);
	return 0;
}

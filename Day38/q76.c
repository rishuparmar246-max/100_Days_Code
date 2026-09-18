#include <stdio.h>

int main(void)
{
	int rows, columns;
	scanf("%d %d", &rows, &columns);

	int matrix[rows][columns];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	int symmetric = rows == columns;
	for (int i = 0; symmetric && i < rows; i++) {
		for (int j = i + 1; j < columns; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				symmetric = 0;
				break;
			}
		}
	}

	printf("%s\n", symmetric ? "True" : "False");
	return 0;
}

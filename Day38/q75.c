 #include <stdio.h>

int main(void)
{
	int rows, columns;

	scanf("%d %d", &rows, &columns);

	int first[rows][columns];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &first[i][j]);
		}
	}

	int secondRows, secondColumns;
	scanf("%d %d", &secondRows, &secondColumns);

	if (rows != secondRows || columns != secondColumns) {
		return 0;
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			int value;
			scanf("%d", &value);
			printf("%d%c", first[i][j] + value, j == columns - 1 ? '\n' : ' ');
		}
	}

	return 0;
}

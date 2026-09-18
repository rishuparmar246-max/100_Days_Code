#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int rows, columns;

	if (scanf("%d %d", &rows, &columns) != 2 || rows <= 0 || columns <= 0) {
		return 1;
	}

	int diagonal_length = rows < columns ? rows : columns;
	int *diagonal = malloc((size_t)diagonal_length * sizeof(*diagonal));
	if (diagonal == NULL) {
		return 1;
	}

	bool distinct = true;
	int diagonal_count = 0;

	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			int value;
			scanf("%d", &value);

			if (row == column) {
				for (int index = 0; index < diagonal_count; index++) {
					if (diagonal[index] == value) {
						distinct = false;
						break;
					}
				}
				diagonal[diagonal_count++] = value;
			}
		}
	}

	printf("%s\n", distinct ? "True" : "False");
	free(diagonal);
	return 0;
}

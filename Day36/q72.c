#include <stdio.h>

int main(void)
{
	int rows, columns;
	int sum = 0;

	scanf("%d %d", &rows, &columns);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			int value;
			scanf("%d", &value);
			sum += value;
		}
	}

	printf("%d\n", sum);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

static int ceil_index(const int arr[], int size, int x)
{
	int left = 0;
	int right = size;

	while (left < right) {
		int middle = left + (right - left) / 2;

		if (arr[middle] < x) {
			left = middle + 1;
		} else {
			right = middle;
		}
	}

	return left < size ? left : -1;
}

int main(void)
{
	int size;

	if (scanf("%d", &size) != 1 || size < 0) {
		return 1;
	}

	int *arr = size > 0 ? malloc((size_t)size * sizeof(*arr)) : NULL;
	if (size > 0 && arr == NULL) {
		return 1;
	}

	for (int i = 0; i < size; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 1;
		}
	}

	int x;
	if (scanf("%d", &x) != 1) {
		free(arr);
		return 1;
	}

	printf("%d\n", ceil_index(arr, size, x));
	free(arr);
	return 0;
}

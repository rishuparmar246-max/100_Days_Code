 #include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int array[n];
	for (int index = 0; index < n; index++) {
		scanf("%d", &array[index]);
	}

	for (int left = 0, right = n - 1; left < right; left++, right--) {
		int temporary = array[left];
		array[left] = array[right];
		array[right] = temporary;
	}

	for (int index = 0; index < n; index++) {
		if (index > 0) {
			printf(" ");
		}
		printf("%d", array[index]);
	}
	printf("\n");

	return 0;
}

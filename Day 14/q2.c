 #include <stdio.h>

int main(void)
{
	int n;
	int product = 1;

	scanf("%d", &n);

	for (int number = 2; number <= n; number += 2)
	{
		product *= number;
	}

	printf("%d\n", product);

	return 0;
}

 #include <stdio.h>

int main(void)
{
	for (int row = 1; row <= 5; row++)
	{
		for (int star = 1; star <= row; star++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

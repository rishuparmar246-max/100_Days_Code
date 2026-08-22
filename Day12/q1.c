 #include <stdio.h>

int main(void)
{
	int late_days;
	int fine;

	scanf("%d", &late_days);

	if (late_days < 0)
	{
		printf("Invalid number of late days\n");
	}
	else if (late_days > 30)
	{
		printf("Membership Cancelled\n");
	}
	else if (late_days <= 5)
	{
		fine = late_days * 2;
		printf("Fine \xE2\x82\xB9%d\n", fine);
	}
	else if (late_days <= 10)
	{
		fine = (5 * 2) + ((late_days - 5) * 4);
		printf("Fine \xE2\x82\xB9%d\n", fine);
	}
	else
	{
		fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
		printf("Fine \xE2\x82\xB9%d\n", fine);
	}

	return 0;
}

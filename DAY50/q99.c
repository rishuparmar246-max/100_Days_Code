#include <stdio.h>

int main(void)
{
    static const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int day, month, year;

    if (scanf("%d/%d/%d", &day, &month, &year) != 3 || month < 1 || month > 12) {
        return 1;
    }

    printf("%02d-%s-%04d\n", day, months[month - 1], year);
    return 0;
}
#include <stdio.h>

int main() {
    int n, first, last, digits = 0, temp, divisor, middle;

    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    if (digits <= 1) {
        printf("%d\n", n);
        return 0;
    }

    divisor = 1;
    for (int i = 1; i < digits; i++) {
        divisor *= 10;
    }

    first = n / divisor;
    last = n % 10;
    middle = (n % divisor) / 10;

    printf("%d\n", last * divisor + middle * 10 + first);

    return 0;
}

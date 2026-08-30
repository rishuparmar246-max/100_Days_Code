#include <stdio.h>

int main() {
    long long num, temp;
    long long product = 1;
    int hasOddDigit = 0;

    scanf("%lld", &num);

    if (num < 0) {
        num = -num;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;

        if (digit % 2 != 0) {
            product *= digit;
            hasOddDigit = 1;
        }

        temp /= 10;
    }

    if (!hasOddDigit) {
        printf("1\n");
    } else {
        printf("%lld\n", product);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, x;
    int leftSum, rightSum;
    int pivot = -1;

    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        leftSum = 0;
        rightSum = 0;

        // Sum from 1 to x
        for (int i = 1; i <= x; i++) {
            leftSum += i;
        }

        // Sum from x to n
        for (int i = x; i <= n; i++) {
            rightSum += i;
        }

        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}
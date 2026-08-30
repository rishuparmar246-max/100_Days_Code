#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (double)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}

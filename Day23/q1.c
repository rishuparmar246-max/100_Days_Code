#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4.0 * i - 1.0);
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}

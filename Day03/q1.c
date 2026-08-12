#include <stdio.h>

int main(void) {
    double celsius;
    if (scanf("%lf", &celsius) != 1) {
        return 1;
    }

    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    if (fahrenheit == (int)fahrenheit) {
        printf("Fahrenheit=%.0f", fahrenheit);
    } else {
        printf("Fahrenheit=%.2f", fahrenheit);
    }

    return 0;
}

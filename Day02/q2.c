#include <stdio.h>

int main(void) {
    double radius;
    if (scanf("%lf", &radius) != 1) {
        return 1;
    }

    const double pi = 3.14159;
    double area = pi * radius * radius;
    double circumference = 2.0 * pi * radius;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);
    return 0;
}

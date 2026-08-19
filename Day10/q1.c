#include <stdio.h>

int main() {
    int a, b, c;

    // Input the side lengths
    scanf("%d %d %d", &a, &b, &c);

    // Classify the triangle
    if (a == b && b == c) {
        printf("Equilateral");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles");
    } else {
        printf("Scalene");
    }

    return 0;
}
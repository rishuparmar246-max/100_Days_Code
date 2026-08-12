#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    int temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d", a, b);
    return 0;
}

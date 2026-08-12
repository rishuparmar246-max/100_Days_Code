#include <stdio.h>

int main(void) {
    int length, breadth;
    if (scanf("%d %d", &length, &breadth) != 2) {
        return 1;
    }

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d", area, perimeter);
    return 0;
}

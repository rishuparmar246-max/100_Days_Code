#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    int i, len;

    scanf("%s", binary);

    len = strlen(binary);

    for (i = 0; i < len; i++) {
        if (binary[i] == '0') {
            printf("1");
        } else {
            printf("0");
        }
    }

    printf("\n");
    return 0;
}

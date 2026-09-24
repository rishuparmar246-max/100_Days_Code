#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%99s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }

    printf("%s\n", str);
    return 0;
}

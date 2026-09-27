#include <ctype.h>
#include <stdio.h>

int main() {
    char first[100], last[100];

    scanf("%s %s", first, last);

    printf("%c.%c.\n", toupper(first[0]), toupper(last[0]));

    return 0;
}

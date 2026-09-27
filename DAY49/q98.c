#include <ctype.h>
#include <stdio.h>

int main() {
    char first[100], middle[100], last[100];

    scanf("%s %s %s", first, middle, last);

    printf("%c.%c. %s\n", toupper(first[0]), toupper(middle[0]), last);

    return 0;
}

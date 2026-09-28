#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[4096];

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 0;
    }

    size_t length = strcspn(text, "\r\n");
    text[length] = '\0';

    int first = 1;
    for (size_t start = 0; start < length; start++) {
        for (size_t end = start + 1; end <= length; end++) {
            if (!first) {
                putchar(',');
            }
            printf("%.*s", (int)(end - start), text + start);
            first = 0;
        }
    }

    putchar('\n');
    return 0;
}
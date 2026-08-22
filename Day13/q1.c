#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers and an operator: ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("Output: %d", a + b);
            break;

        case '-':
            printf("Output: %d", a - b);
            break;

        case '*':
            printf("Output: %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Output: %d", a / b);
            else
                printf("Division by zero not allowed");
            break;

        case '%':
            if (b != 0)
                printf("Output: %d", a % b);
            else
                printf("Modulo by zero not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
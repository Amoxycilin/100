//Q25 Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter expression (e.g. 10 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("%d + %d = %d\n", a, b, result);
            break;
        case '-':
            result = a - b;
            printf("%d - %d = %d\n", a, b, result);
            break;
        case '*':
            result = a * b;
            printf("%d * %d = %d\n", a, b, result);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            } else {
                printf("Invalid entry: cannot divide by zero\n");
            }
            break;
        case '%':
            if (b != 0) {
                result = a % b;
                printf("%d %% %d = %d\n", a, b, result);
            } else {
                printf("Invali entry: cannot modulus by zero\n");
            }
            break;
        default:
            printf("Invalid entry\n");
    }

    return 0;
}

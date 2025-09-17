//Q43 Write a program to check if a number is a strong number.
#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, temp, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += factorial(remainder);
        temp /= 10;
    }

    if (sum == n)
        printf("%d is a strong number.\n", n);
    else
        printf("%d is not a strong number.\n", n);

    return 0;
}

#include <stdio.h>

int main() {
    int n, num, lastDigit, firstDigit, digits = 0, middle, swapped, pow10 = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10) {
        printf("Swapped number: %d\n", n);
        return 0;
    }
    num = n;

    while (num >= 10) {
        num /= 10;
        digits++;
        pow10 *= 10;
    }
    firstDigit = n / pow10;
    lastDigit = n % 10;
    middle = (n % pow10) / 10;

    swapped = lastDigit * pow10 + middle * 10 + firstDigit;

    printf("Swapped number: %d\n", swapped);

    return 0;
}

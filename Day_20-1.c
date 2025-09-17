//Q39 Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, remainder, product = 1;
    int found = 0; 

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) { 
            product *= remainder;
            found = 1;
        }
        n /= 10;
    }

    if (found)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}

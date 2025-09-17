//Q44 Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 1.0;
    int numerator = 1, denominator = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        numerator += 2; 
        denominator += 2; 
        sum += (double)numerator / denominator; 
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}

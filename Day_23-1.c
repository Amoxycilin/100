//Q45 Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.67;
    int numerator = 2, denominator = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        numerator += 2;    
        denominator += 4; 
        sum += (double)numerator / denominator; 
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}

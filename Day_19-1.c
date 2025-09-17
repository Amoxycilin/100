//Q37 Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, hcf, tempA, tempB;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    hcf = tempA;

    int lcm = (a * b) / hcf;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}

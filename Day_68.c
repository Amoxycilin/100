#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (numbers between 0 to %d, one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int i = 0; i < n; i++) {
        arraySum += arr[i];
    }
    int missing = totalSum - arraySum;
    printf("Missing number: %d\n", missing);
    return 0;
}
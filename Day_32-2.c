//Q64 Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n = 1223334455;
    int count[10] = {0}; 
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    int maxCount = 0;
    int mostFrequentDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The %d that occurs the most times in %d (it occurs %d times)\n", mostFrequentDigit, n, maxCount);

    return 0;
}

//Q69 Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {10, 50, 20, 70, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest != INT_MIN) {
        printf("The second largest element is: %d\n", secondLargest);
    } else {
        printf("There is no second largest element.\n");
    }

    return 0;
}

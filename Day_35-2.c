//Q70 Rotate an array to the right by k positions.
#include <stdio.h>

void rotateRight(int arr[], int size, int k) {
    k = k % size; 
    int temp[k];

    for(int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }

    for(int i = size - 1 - k; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int j;
printf("Array before rotation: ");
    for(int j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    rotateRight(arr, size, k);

    printf("Array after rotation: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

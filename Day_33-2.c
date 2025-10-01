//Q66 Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100] = {2, 4, 6, 8, 10};
    int size = 5; 
    int element = 7; 

    int j;
    printf("Array before insertion: ");
    for(j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    int i;
    for(i = size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; 
    }

    arr[i + 1] = element; 
    size++; 

    printf("Array after insertion: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

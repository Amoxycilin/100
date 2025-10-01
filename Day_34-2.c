//Q68 Delete an element from an array.
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5; 
    int element = 30; 
    int i, found = 0;

    for(i = 0; i < size; i++) {
        if(arr[i] == element) {
            found = 1;
            break;
        }
    }

    int l;
    printf("Array before deletion: ");
        for(int l = 0; l < size; l++) {
            printf("%d ", arr[l]);
        }
        printf("\n");

    if(found) {
        for(int j = i; j < size - 1; j++) {
            arr[j] = arr[j + 1]; 
        }
        size--; 
        printf("Array after deletion: ");
        for(int k = 0; k < size; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

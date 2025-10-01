//Q67 Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5; 
    int element = 25;
    int position = 3; 

    if(position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    int j;
    printf("Array before insertion: ");
    for(int j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    for(int i = size - 1; i >= position - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position - 1] = element; 
    size++; 

    printf("Array after insertion: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

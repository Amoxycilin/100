/*Q101 Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
 The elements in the sorted array might be repeated. 
 You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
 Print -1, -1 if the target is not present.*/
 #include <stdio.h>

int main() {
    int nums[100], n, target;
    int i, first = -1, last = -1;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    printf("Enter %d elements in order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        if(nums[i] == target) {
            first = i;
            break; 
        }
    }

    for(i = n - 1; i >= 0; i--) {
        if(nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("The indices of the first and last occurences are: %d, %d\n", first, last);

    return 0;
}

//Q92 Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int i;
    char result = '\0';

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            if(freq[index] == 2) {
                result = str[i];
                break;
            }
        }
    }

    if(result != '\0')
        printf("The first repeating lowercase alphabet in the string is: %c\n", result);
    else
        printf("No repeating lowercase alphabets found in the string.\n");

    return 0;
}

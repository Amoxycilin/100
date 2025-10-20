//Q96 Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start, end, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    start = 0;
    for(i = 0; ; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            while(start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
        if(str[i] == '\0')
            break;
    }

    printf("The sentence with words reversed is: %s\n", str);
    return 0;
}

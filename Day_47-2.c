//Q94 Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    longest[0] = '\0';

    while(1) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            if(j > 0) {
                word[j] = '\0';
                if(j > maxLen) {
                    maxLen = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
            if(str[i] == '\0' || str[i] == '\n')
                break;
        }
        i++;
    }

    printf("The longest word in the sentence is: %s\n", longest);
    return 0;
}

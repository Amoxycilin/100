//Q14 Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (!isalpha(ch)) {
        printf("%c is not an alphabet\n", ch);
    } else {
        char lower = tolower(ch);

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("%c is a Vowel\n", ch);
        } else {
            printf("%c is a Consonant\n", ch);
        }
    }

    return 0;
}

//Q89 Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[200], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to find frequency of: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    printf("The frequency of '%c' in the string is %d\n", ch, count);

    return 0;
}

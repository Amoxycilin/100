//Q93 Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if(strlen(str1) != strlen(str2)) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;
        else if(str1[i] >= 'A' && str1[i] <= 'Z')
            freq1[str1[i] - 'A']++;
    }

    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;
        else if(str2[i] >= 'A' && str2[i] <= 'Z')
            freq2[str2[i] - 'A']++;
    }

    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}

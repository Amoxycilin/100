#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }
    if (n > 0 && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }
    for (int i = 1; i < n; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Sentence case: %s\n", str);
    return 0;
}
//Q97 Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Your initials are: ");

    if(name[0] != ' ')
        printf("%c", name[0]);

    for(i = 1; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }

    printf("\n");
    return 0;
}

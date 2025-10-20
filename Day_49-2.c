//Q98 Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Your formatted name is: ");

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] != ' ' && (i == 0 || name[i-1] == ' ')) {
            lastSpace = i; 
        }
    }

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] != ' ' && (i == 0 || name[i-1] == ' ')) {
            if(i == lastSpace) {
                printf("%s", &name[i]);
                break;
            } else {
                printf("%c. ", toupper(name[i]));
            }
        }
    }

    printf("\n");
    return 0;
}

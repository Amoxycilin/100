/*Q54 Write a program to print the following pattern:

*

***

*****

*******

*****

***

*
end */
#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 7, 5, 3, 1}; 
    int g, i;

    for (g = 0; g < 7; g++) {         
        for (i = 0; i < groups[g]; i++) {
            printf("*");
        }
        printf("\n\n");                  
    }

    return 0;
}

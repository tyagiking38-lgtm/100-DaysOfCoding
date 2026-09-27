#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int lastSpace = -1;

    fgets(str, sizeof(str), stdin);

    // Find the position of the last space
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }

    // Print initials before surname
    for(i = 0; i < lastSpace; i++) {
        if(i == 0 || str[i - 1] == ' ') {
            printf("%c.", str[i]);
        }
    }

    printf(" ");

    // Print surname
    for(i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
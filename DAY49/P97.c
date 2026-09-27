#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    if(str[0] != ' ' && str[0] != '\n') {
        printf("%c.", str[0]);
    }

    while(str[i] != '\0' && str[i] != '\n') {

        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            printf("%c.", str[i + 1]);
        }

        i++;
    }

    return 0;
}
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    while(str[count] != '\0') {
        if(str[count] == '\n') {
            break;
        }
        count++;
    }

    printf("%d", count);

    return 0;
}
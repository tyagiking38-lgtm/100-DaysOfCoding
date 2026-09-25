#include <stdio.h>

int main() {
    char str[200];
    char longest[200];
    int i = 0;
    int currentLength = 0;
    int longestLength = 0;
    int start = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n') {

        if(str[i] != ' ') {
            currentLength++;
        }
        else {
            if(currentLength > longestLength) {
                longestLength = currentLength;

                for(int j = 0; j < currentLength; j++) {
                    longest[j] = str[start + j];
                }

                longest[currentLength] = '\0';
            }

            currentLength = 0;
            start = i + 1;
        }

        i++;
    }

    // Check the last word
    if(currentLength > longestLength) {
        longestLength = currentLength;

        for(int j = 0; j < currentLength; j++) {
            longest[j] = str[start + j];
        }

        longest[currentLength] = '\0';
    }

    printf("%s", longest);

    return 0;
}

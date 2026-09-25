#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};
    int i = 0;
    int anagram = 1;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Count characters of first string
    i = 0;
    while(str1[i] != '\0' && str1[i] != '\n') {
        count[str1[i] - 'a']++;
        i++;
    }

    // Remove characters of second string
    i = 0;
    while(str2[i] != '\0' && str2[i] != '\n') {
        count[str2[i] - 'a']--;
        i++;
    }

    // Check if all counts are zero
    for(i = 0; i < 26; i++) {
        if(count[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if(anagram == 1) {
        printf("Anagrams");
    }
    else {
        printf("Not anagrams");
    }

    return 0;
}
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {

        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z') {
            consonants++;
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
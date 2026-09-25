#include <stdio.h>

int main() {
    long long n;
    int digit, i, max = 0, answer = 0;

    scanf("%lld", &n);

    int count[10] = {0};

    while(n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            answer = i;
        }
    }

    printf("%d", answer);

    return 0;
}
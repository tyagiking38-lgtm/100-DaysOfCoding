#include <stdio.h>

int main() {
    int n, i, position, element;

    scanf("%d", &n);

    int arr[n + 1];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &position, &element);

    for(i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;

    for(i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
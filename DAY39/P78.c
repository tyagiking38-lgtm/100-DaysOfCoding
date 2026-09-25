#include <stdio.h>

int main() {
    int rows, columns, i, sum = 0;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    for(i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        sum = sum + matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}
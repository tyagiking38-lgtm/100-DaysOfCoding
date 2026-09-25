#include <stdio.h>

int main() {
    int rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    int rowSum[rows];

    for(i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    for(i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
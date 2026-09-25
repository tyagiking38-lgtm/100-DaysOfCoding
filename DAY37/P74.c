#include <stdio.h>

int main() {
    int rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    int transpose[columns][rows];

    // Read matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose
    for(i = 0; i < columns; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
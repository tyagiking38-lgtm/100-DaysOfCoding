#include <stdio.h>

int main() {
    int rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    int a[rows][columns];
    int b[rows][columns];
    int sum[rows][columns];

    // Read first matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read second matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
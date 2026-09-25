#include <stdio.h>

int main() {
    int rows, columns, i, j, diagonal;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(diagonal = 0; diagonal <= rows + columns - 2; diagonal++) {

        if(diagonal % 2 == 0) {
            for(i = rows - 1; i >= 0; i--) {
                j = diagonal - i;

                if(j >= 0 && j < columns) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
        else {
            for(i = 0; i < rows; i++) {
                j = diagonal - i;

                if(j >= 0 && j < columns) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }

    return 0;
}
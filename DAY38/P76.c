#include <stdio.h>

int main() {
    int rows, columns, i, j;
    int symmetric = 1;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if(rows != columns) {
        symmetric = 0;
    }
    else {
        for(i = 0; i < rows; i++) {
            for(j = 0; j < columns; j++) {

                if(matrix[i][j] != matrix[j][i]) {
                    symmetric = 0;
                    break;
                }
            }

            if(symmetric == 0) {
                break;
            }
        }
    }

    if(symmetric == 1) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}
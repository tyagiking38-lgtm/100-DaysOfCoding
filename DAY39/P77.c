#include <stdio.h>

int main() {
    int rows, columns, i, j;
    int distinct = 1;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if(rows != columns) {
        distinct = 0;
    }
    else {
        for(i = 0; i < rows; i++) {
            for(j = i + 1; j < rows; j++) {

                if(matrix[i][i] == matrix[j][j]) {
                    distinct = 0;
                    break;
                }
            }

            if(distinct == 0) {
                break;
            }
        }
    }

    if(distinct == 1) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}
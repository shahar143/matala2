#include <stdio.h>
#include "my_mat.h"

int main() {
    char input;
    scanf("%c", &input);
    int row, column;
    int matrix[ROW_LENGTH][COL_LENGTH];
    while(input != 'D'){
        switch (input) {
            case 'A':
                buildMatrix(matrix);
                break;
            case 'B':
                scanf("%d", &row);
                scanf("%d", &column);
                isRoute(row, column, matrix);
                break;
            case 'C':
                scanf("%d", &row);
                scanf("%d", &column);
                printf(" %d",shortestRoute(row, column, matrix));
                break;
        }
        scanf("%c", &input);
    }
    return 0;
}



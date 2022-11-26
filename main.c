#include <stdio.h>
#include "my_mat.h"

int main() {
    char input;
    scanf("%c", &input);
    int row, column;
    int matrix[2][2];
    while(input != 'D'){
        switch (input) {
            case 'A':
                buildMatrix(matrix);
                break;
            case 'B':
                scanf("%d", &row);
                scanf("%d", &column);
                isRoute(row, column);
                break;
            case 'C':
                scanf("%d", &row);
                scanf("%d", &column);
                printf(" %d",shortestRoute(row, column));
                break;
        }
        scanf("%c", &input);
    }
    return 0;
}



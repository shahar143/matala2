#include <stdio.h>
#include "my_mat.h"

extern int matrix[MATRIX_DIMENSIONS][MATRIX_DIMENSIONS];
int main() {
    char input;
    scanf("%c", &input);
    int row, column;
    while(input != 'D'){
        switch (input) {
            case 'A':
                buildMatrix();
                break;
            case 'B':
                scanf("%d", &row);
                scanf("%d", &column);
                isRoute(row, column);
                printf("\n");
                break;
            case 'C':
                scanf("%d", &row);
                scanf("%d", &column);
                printf("%d\n",shortestRoute(row, column));
                break;
        }
        scanf("%c", &input);
    }
    return 0;
}



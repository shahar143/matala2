#include <stdio.h>
#include "my_mat.h"

#define MAT_SIZE 10

int main() {

    int mat[MAT_SIZE][MAT_SIZE];
    char let = 'Z';
    int row;
    int col;
    while(let != 'D'){
        scanf("%c", &let);
        if(let == 'A'){
            buildMatrix(mat);
        }
        else if(let == 'B'){
            scanf("%d %d", &row, &col);
            isRoute(mat, row, col);
        }
        else if(let == 'C') {
            scanf("%d %d", &row, &col);
            minRoute(mat, row, col);
        }
    }
    return 0;
}


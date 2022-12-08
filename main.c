#include <stdio.h>
#include "my_mat.h"

#define MAT_SIZE 10

int main() {

    int mat[MAT_SIZE][MAT_SIZE];
    char let;
    scanf("%c", &let);
    while(let != 'D'){
        if(let == 'A'){
            buildMatrix(mat);
        }
        else if(let == 'B'){
            isRoute(mat);
        }
        else if(let == 'C') {
            minRoute(mat);
        }
        scanf("%c", &let);
    }
    return 0;
}


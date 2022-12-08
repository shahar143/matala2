//
// Created by shahar on 11/22/22.
//

#include <stdio.h>
#include "my_mat.h"

#define INF 999999
#define MAT_SIZE 10

void buildMatrix(int mat[MAT_SIZE][MAT_SIZE]){
    for(int i = 0; i < MAT_SIZE; i++)
    {
        for(int j = 0; j < MAT_SIZE; j++)
        {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 0)
                if(i != j) mat[i][j] = INF;
        }
    }
    Floyd_Warshall(mat);
}

void isRoute(int mat[MAT_SIZE][MAT_SIZE], int i, int j){
    Floyd_Warshall(mat);
    if(mat[i][j] > 0 && mat[i][j] < INF){
        printf("True\n");
    }
    else
        printf("False\n");
}

void minRoute(int mat[MAT_SIZE][MAT_SIZE], int row, int col){
    Floyd_Warshall(mat);
    if(mat[row][col] > 0 && mat[row][col] < INF)
        printf("%d \n", mat[row][col]);
    else printf("%d \n", -1);
}


void Floyd_Warshall(int mat[MAT_SIZE][MAT_SIZE]){
    for(int m = 0; m < MAT_SIZE; m++){
        for(int r = 0; r < MAT_SIZE; r++){
            for(int c = 0; c < MAT_SIZE; c++){
                if(mat[r][m] + mat[m][c] < mat[r][c]){
                    mat[r][c] = mat[r][m] + mat[m][c];
                    mat[c][r] = mat[r][m] + mat[m][c];
                }
            }
        }
    }
}


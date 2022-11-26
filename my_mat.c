//
// Created by shahar on 11/22/22.
//
#include <stdio.h>
#include "my_mat.h"

void buildMatrix(int matrix[ROW_LENGTH][COL_LENGTH]){
    for(size_t row = 0; row < ROW_LENGTH; row++){
        for(size_t column = 0; column < COL_LENGTH; column++){
            printf("[%zu , %zu]", row, column);
            scanf("%d", &matrix[row][column]);
        }
    }
    printf("Given matrix\n");

    for(size_t row = 0; row < ROW_LENGTH; row++){
        printf("[");
        for(size_t column = 0; column < COL_LENGTH; column++){
            printf("[%d]", matrix[row][column]);
        }
        printf("]\n");
    }
}

void isRoute(int row, int column, int matrix[ROW_LENGTH][COL_LENGTH]){

}

int shortestRoute(int row, int column, int matrix[ROW_LENGTH][COL_LENGTH]){
    return 1;
}



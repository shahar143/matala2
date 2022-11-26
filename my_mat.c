//
// Created by shahar on 11/22/22.
//
#include <stdio.h>
#include "my_mat.h"
void buildMatrix(int matrix[2][2]){
    for(size_t row = 0; row < 2; row++){
        for(size_t column = 0; column < 2; column++){
            printf("[%zu , %zu]", row, column);
            scanf("%d", &matrix[row][column]);
        }
    }
    printf("Given matrix\n");

    for(size_t row = 0; row < 2; row++){
        printf("[");
        for(size_t column = 0; column < 2; column++){
            printf("[%d]", matrix[row][column]);
        }
        printf("]\n");
    }
}

void isRoute(int row, int column){
    printf("isRoute entered\n");
}

int shortestRoute(int row, int column){
    return 1;
}



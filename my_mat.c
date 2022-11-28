//
// Created by shahar on 11/22/22.
//
#include <stdio.h>
#include "my_mat.h"
#include <math.h>

int matrix[MATRIX_DIMENSIONS][MATRIX_DIMENSIONS];

void buildMatrix(){
    for(size_t row = 0; row < MATRIX_DIMENSIONS; row++){
        for(size_t column = 0; column < MATRIX_DIMENSIONS; column++){
            scanf("%d", &matrix[row][column]);
        }
    }
}


void floydMarshalAlgorithm(){
    for(int k = 0; k < MATRIX_DIMENSIONS; k++){
        for(int i = 0; i < MATRIX_DIMENSIONS; i++){
            for(int j = 0; j < MATRIX_DIMENSIONS; j++){

            }
        }
    }
}

void isRoute(int row, int column){
    floydMarshalAlgorithm();
    if(matrix[row][column] != 0)
        printf("True");
    else
        printf("False");
}

int shortestRoute(int row, int column){
    floydMarshalAlgorithm();
    return matrix[row][column] != 0 ? matrix[row][column] : -1;
}



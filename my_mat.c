//
// Created by shahar on 11/22/22.
//
#include <stdio.h>
#include "my_mat.h"
#define INF 9999999

int matrix[MATRIX_DIMENSIONS][MATRIX_DIMENSIONS];

void buildMatrix(){
    for(size_t row = 0; row < MATRIX_DIMENSIONS; row++){
        for(size_t column = 0; column < MATRIX_DIMENSIONS; column++){
            scanf("%d", &matrix[row][column]);
            if(matrix[row][column] == 0 && row != column)
                matrix[row][column] = INF;
        }
    }
}


void floydMarshalAlgorithm(){
    for(int k = 0; k < MATRIX_DIMENSIONS; k++){
        for(int i = 0; i < MATRIX_DIMENSIONS; i++){
            for(int j = 0; j < MATRIX_DIMENSIONS; j++){
                if(matrix[i][k] + matrix[k][j] < matrix[i][j]){
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                    matrix[j][i] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }
}

void isRoute(int row, int column){
    floydMarshalAlgorithm();
    if(matrix[row][column] < INF && row != column)
        printf("True");
    else
        printf("False");
}

int shortestRoute(int row, int column){
    floydMarshalAlgorithm();
    if(matrix[row][column] > 0 && matrix[row][column] < INF)
        return matrix[row][column];
    return -1;
}



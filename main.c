#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int mat[10][10];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &mat[i][j]);
            printf("mat [%d][%d] = %d ", i, j, mat[i][j]);
        }
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

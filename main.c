#include <stdio.h>
#include "my_mat.h"
int main() {
    char input;
    scanf("%c", &input);
    while(input != 'D'){
        int row;
        int column;
        switch (input) {
            case 'A':
                buildMatrix();
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



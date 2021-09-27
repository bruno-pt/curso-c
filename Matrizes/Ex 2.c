#include <stdio.h>

int main (){

    int sm=0;
    int mat[4][4] = {{2, 9, 16, 1},
                     {4, 13, 7, 11},
                     {10, 3, 6, 5},
                     {15, 14, 8, 12}};

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            sm += mat[i][j];
        }
    }
    printf("\n\nA soma de todos os elementos da Matriz: %d\n\n", sm);
}

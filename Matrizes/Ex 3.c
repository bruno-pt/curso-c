#include <stdio.h>

int main(){

    int mat[3][4];
    int x;

    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            printf("Digite um valor para a posicao M[%d][%d]: ", i, j);
                scanf("%d", &mat[i][j]);
        }
    }

    printf("\n\nDigite um valor inteiro para X: ");
        scanf("%d", &x);

    printf("\n\nOs elementos da Matriz multiplicado por %d ficara:\n\n", x);
    printf("    0     1     2     3\n");
    printf("   -------------------------\n");
    printf("0 | %d    %d    %d    %d \n", mat[0][0]*x, mat[0][1]*x, mat[0][2]*x, mat[0][3]*x);
    printf("1 | %d    %d    %d    %d \n", mat[1][0]*x, mat[1][1]*x, mat[1][2]*x, mat[1][3]*x);
    printf("2 | %d    %d    %d    %d \n\n", mat[2][0]*x, mat[2][1]*x, mat[2][2]*x, mat[2][3]*x);

}

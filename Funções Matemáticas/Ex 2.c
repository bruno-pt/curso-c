#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int graus;

    printf("Digite um ângulo qualquer para saber seu:");
    printf("\nSeno, Cosseno, Tangente, Secante, Cossecante e Cotangente\n");

    printf("\nÂngulo: ");
    scanf("%d", &graus);

    float rad = (graus / 180.0) * M_PI;

    float senx = sin(rad);
    float cosx = cos(rad);
    float tgx = tan(rad);
    float secx = 1/cosx;
    float cossecx = 1/senx;
    float cotgx = 1/tgx;

    printf("\nSeno: %f", senx);
    printf("\nCosseno: %f", cosx);
    printf("\nTangente: %f", tgx);
    printf("\nSecante: %f", secx);
    printf("\nCossecante: %f", cossecx);
    printf("\nCotangente: %f\n", cotgx);



}

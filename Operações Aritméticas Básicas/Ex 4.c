#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float r;

    printf("Digite um valor de Raio para obter as seguintes medidas da circunfer�ncia:\n");
    printf("Di�metro, �rea e Per�metro.\n");
    printf("\nRaio: ");
    scanf("%f", &r);

    float d = 2 * r;
    float a = pow(r, 2) * M_PI;
    float p = 2 * r * M_PI;

    printf("\nDi�metro: %.1fcm\n", d);
    printf("\n�rea: %.1fcm\n", a);
    printf("\nPer�metro: %.1fcm\n", p);

    return 0;

}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float r;

    printf("Digite um valor de Raio para obter as seguintes medidas da circunferência:\n");
    printf("Diâmetro, Área e Perímetro.\n");
    printf("\nRaio: ");
    scanf("%f", &r);

    float d = 2 * r;
    float a = pow(r, 2) * M_PI;
    float p = 2 * r * M_PI;

    printf("\nDiâmetro: %.1fcm\n", d);
    printf("\nÁrea: %.1fcm\n", a);
    printf("\nPerímetro: %.1fcm\n", p);

    return 0;

}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float r;
    float a;

    printf("Para calcular o volume de um Cil�ndro, precisamos de um Raio e Altura.\n");
    printf("\nRaio em cm: ");
    scanf("%f", &r);

    printf("\nAltura em cm: ");
    scanf("%f", &a);

    float d = pow(r, 2) * a * M_PI;

    printf("\nO volume do Cil�ndro �: %.1fcm�\n", d);

    return 0;

}

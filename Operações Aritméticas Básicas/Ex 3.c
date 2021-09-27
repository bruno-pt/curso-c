#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float m1, m2, m3, m4;
    int p2 = 2;
    int p3 = 3;

    printf("Vamos calcular a média ponderada de 4 valores.\n");

    printf("\nDigite o primeiro valor (Peso 2): ");
    scanf("%f", &m1);

    printf("\nDigite o segundo valor (Peso 2): ");
    scanf("%f", &m2);

    printf("\nDigite o terceiro valor (Peso 3): ");
    scanf("%f", &m3);

    printf("\nDigite o quarto valor (Peso 3): ");
    scanf("%f", &m4);

    float result = ((p2 * (m1 + m2)) + (p3 * (m3 + m4))) / (2 * (p2 + p3));

    printf("\nA média ponderada entre os 4 valores é: %.2f\n", result);

    return 0;
}

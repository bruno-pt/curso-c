#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float m1, m2, m3;

    printf("Vamos calcular a m�dia aritm�tica de 3 valores.");

    printf("\nDigite o primeiro valor: ");
    scanf("%f", &m1);

    printf("\nDigite o segundo valor: ");
    scanf("%f", &m2);

    printf("\nDigite o terceiro valor: ");
    scanf("%f", &m3);

    float result = (m1 + m2 + m3) / 3;

    printf("\nA m�dia aritm�tica entre os 3 valores �: %.2f\n", result);

    return 0;
}

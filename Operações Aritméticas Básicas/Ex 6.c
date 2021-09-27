#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float dmai;
    float dmen;

    printf("Calcular a área de um Losango utilizando os valores da Diagonal Maior e Menor.\n");
    printf("\nDiagonal Maior em cm: ");
    scanf("%f", &dmai);

    printf("\nDiagonal Menor em cm: ");
    scanf("%f", &dmen);

        while (dmen > dmai){
                printf("\nA Diagonal Menor deve ser menor que %.1fcm: ", dmai);
                scanf("%f", &dmen);
                }

    float a = (dmai * dmen) / 2;

    printf("\nA área do Losango é: %.1fcm\n", a);


}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    char nome[61];
    float altura, massa;

    printf("C�lculo de �ndice de Massa Corporal (IMC)\n");

    printf("\nQual o seu Nome? ");
    scanf("%s", &nome);

    printf("\nQual a sua Altura(m)? ");
    scanf("%f", &altura);

    printf("\nPara finalizar, qual a sua Massa(kg)? ");
    scanf("%f", &massa);

    float imc = massa / pow(altura, 2);

    printf("\nSr(a) %s, seu IMC � de: %.2f!\n", nome, imc);


}

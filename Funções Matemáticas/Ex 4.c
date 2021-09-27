#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int nmr;

    printf("\nDigite um número de 3 dígitos: ");
    scanf("%d", &nmr);

    int c = (nmr/100);
    int d = (nmr/10) % 10;
    int u = nmr % 100 % 10;

    printf("\nCentena: %d", c);
    printf("\nDezena: %d", d);
    printf("\nUnidade: %d\n", u);
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int x1, y1, x2, y2;

    printf("C�lculo da Dist�ncia entre 2 pontos.\n");

    printf("\nPonto 1  x: ");
    scanf("%d", &x1);

    printf("Ponto 1  y: ");
    scanf("%d", &y1);

    printf("\nPonto 2  x: ");
    scanf("%d", &x2);

    printf("Ponto 2  y: ");
    scanf("%d", &y2);

    int xc = pow((x2 - x1), 2);
    int yc = pow((y2 - y1), 2);
    int ss = xc + yc;
    float dist = sqrt(ss);

    printf("\nA dist�ncia entre:\n\nPonto 1 (%d, %d)\nPonto 2 (%d, %d)\n\n� %.2f!\n", x1, y1, x2, y2, dist);


    }

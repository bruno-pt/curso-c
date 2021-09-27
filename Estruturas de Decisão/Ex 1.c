#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, media;

    printf("Olá Aluno, para saber se foi Aprovado ou Reprovado, \ninforme as notas de tais matérias:\n");
    printf("\nMatéria A: ");
        scanf("%f", &a);

    printf("\nMatéria B: ");
        scanf("%f", &b);

    printf("\nMatéria C: ");
        scanf("%f", &c);


    media = (a+b+c)/3;

    printf("\nSua nota média é: %.1f\n", media);

    if (media >= 6.0)
        printf("\n\nParabéns aluno! Você foi Aprovado!!\n\n");
        else
            printf("\n\nLamento aluno. Você foi Reprovado.\n\n");

}

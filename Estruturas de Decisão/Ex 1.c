#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, media;

    printf("Ol� Aluno, para saber se foi Aprovado ou Reprovado, \ninforme as notas de tais mat�rias:\n");
    printf("\nMat�ria A: ");
        scanf("%f", &a);

    printf("\nMat�ria B: ");
        scanf("%f", &b);

    printf("\nMat�ria C: ");
        scanf("%f", &c);


    media = (a+b+c)/3;

    printf("\nSua nota m�dia �: %.1f\n", media);

    if (media >= 6.0)
        printf("\n\nParab�ns aluno! Voc� foi Aprovado!!\n\n");
        else
            printf("\n\nLamento aluno. Voc� foi Reprovado.\n\n");

}

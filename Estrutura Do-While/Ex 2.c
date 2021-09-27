#include <stdio.h>
#include <locale.h>
// calcular a média de 4 notas do aluno e exibir, quer calcular outra 1 sair 0 quando sair exibe Voce saiu do calculo de
// medias.
int main(){
setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, m;
    int i;

    printf("\n---------------------\n");
    printf("\nCalculadora de Médias\n");
    printf("\n---------------------\n");

    do{
        printf("\nDigite 4 Notas:\n");
            scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        m = (n1 + n2 + n3 + n4) / 4;
        printf("\nA Média é de: %.2f\n", m);
        printf("\nCalcular novamente?\n");
        printf("Sim = 1, Não = 0\n");
            scanf("%d", &i);
        printf("\n---------------------\n");
    }while (i == 1);

    printf("\n\nVocê saiu do cálculo de médias!\n\n");
}

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i, estq;
    float v, vt, mvm;

    printf("--------------------");
    printf("\n\nRegistro de Estoque\n\n");
    printf("--------------------\n\n");

    printf("Digite a Quantidade de Mercadorias no Estoque.\n");
    printf("Qnt: ");
        scanf("%d", &estq);

    vt = mvm = 0.0;

    for (i=1; i <= estq; i++) {
        printf("\nValor da Mercadoria %d: R$ ", i);
            scanf("%f", &v);
        printf("---------------------------");

        vt += v;
        mvm = vt/estq;
    }
    printf("\n\nValor Total em Estoque: R$ %.2f\n\n", vt);
    printf("Média de Valor das Mercadorias: R$ %.2f\n\n", mvm);
    printf("----------------------------------------");
}

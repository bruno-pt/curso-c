#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int soma, v1, v2;

    printf("Digite 2 valores para calcular a soma dos inteiros existentes dentre eles.\n");
    printf("\n1� Valor: ");
        scanf("%d", &v1);

    printf("\n2� Valor: ");
        scanf("%d", &v2);

    while (v1 > v2){
        printf("\nO 2� Valor dever� ser maior que o 1� Valor!\n");
        printf("\n2� Valor: ");
            scanf("%d", &v2);
    }

    printf("\nA soma dos inteiros de %d a %d �: ", v1, v2);

    soma = 0;
    for (v1; v1 <= v2; v1++){
        soma = soma + v1;
    }

    printf("%d!\n", soma);

}

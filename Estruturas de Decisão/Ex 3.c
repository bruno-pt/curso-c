#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite 2 números afim de compará-los.\n");
    printf("\n1º Número: ");
        scanf("%d", &n1);

    printf("\n2º Número: ");
        scanf("%d", &n2);



        if (n1 > n2)
            printf("\n\nO 1º número é o maior!\n\n");

        else if (n2 > n1)
            printf("\n\nO 2º número é o maior!\n\n");

        else if (n1 == n2)
            printf("\n\nOs números são iguais!\n\n");
}

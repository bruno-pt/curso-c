#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int m;
    float desc, ndesc;

    printf("\nSeja Bem-Vindo à Maçã Shop!\n");

    printf("\nEstamos com uma promoção caso compre maçãs em maior quantidade!\n");

    printf("\n1 Maçã = R$ 1,30 se forem compradas em menos de uma Dúzia.\n");
    printf("1 Maçã = R$ 1,00 se forem compradas ao menos uma Dúzia.\n");

    printf("\nQuantas Maçãs deseja comprar? ");
        scanf("%d", &m);

    desc = m * 1;
    ndesc = m * 1.30;

        if (m >= 12)
            printf("\nO custo total das %d Maçãs é de: R$%.2f.\n", m, desc);
            else
                printf("\nO custo total das %d Maçãs é de: R$%.2f.\n", m, ndesc);


}

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int m;
    float desc, ndesc;

    printf("\nSeja Bem-Vindo � Ma�� Shop!\n");

    printf("\nEstamos com uma promo��o caso compre ma��s em maior quantidade!\n");

    printf("\n1 Ma�� = R$ 1,30 se forem compradas em menos de uma D�zia.\n");
    printf("1 Ma�� = R$ 1,00 se forem compradas ao menos uma D�zia.\n");

    printf("\nQuantas Ma��s deseja comprar? ");
        scanf("%d", &m);

    desc = m * 1;
    ndesc = m * 1.30;

        if (m >= 12)
            printf("\nO custo total das %d Ma��s � de: R$%.2f.\n", m, desc);
            else
                printf("\nO custo total das %d Ma��s � de: R$%.2f.\n", m, ndesc);


}

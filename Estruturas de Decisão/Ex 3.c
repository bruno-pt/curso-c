#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite 2 n�meros afim de compar�-los.\n");
    printf("\n1� N�mero: ");
        scanf("%d", &n1);

    printf("\n2� N�mero: ");
        scanf("%d", &n2);



        if (n1 > n2)
            printf("\n\nO 1� n�mero � o maior!\n\n");

        else if (n2 > n1)
            printf("\n\nO 2� n�mero � o maior!\n\n");

        else if (n1 == n2)
            printf("\n\nOs n�meros s�o iguais!\n\n");
}

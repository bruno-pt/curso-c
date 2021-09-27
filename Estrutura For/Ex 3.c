#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i, x, si;
    x = 0;

    while (x < 1){
        printf("Digite um Valor MAIOR que zero: ");
            scanf("%d", &x);
        printf("\n");
    }


    for (i=0; i < x; i++){
        if (i < 1)
            si = x;
            else
                si += i;
    }
    printf("\nA Soma dos Inteiros de 0 a %d é: %d\n", x, si);
}

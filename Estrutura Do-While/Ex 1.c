#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n;

    do{
        printf("Digite um número inteiro até acertar: ");
            scanf("%d", &n);
    } while(n != 0);

    printf("\n\nParabéns, você acertou!\n\n");
}

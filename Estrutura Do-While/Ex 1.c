#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n;

    do{
        printf("Digite um n�mero inteiro at� acertar: ");
            scanf("%d", &n);
    } while(n != 0);

    printf("\n\nParab�ns, voc� acertou!\n\n");
}

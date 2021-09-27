#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float nmr;

    printf("\nDigite um N�mero Real para saber sua Raiz Quadrada: ");
    scanf("%f", &nmr);

    float raiz = sqrt(nmr);

    if (nmr < 0){
        printf("\nN�o existe Raiz Quadrada negativa no conjunto dos Reais!\n");
    }
        else {
            printf("\nA Raiz Quadrada de %.2f �: %.2f\n", nmr, raiz);
        }
}

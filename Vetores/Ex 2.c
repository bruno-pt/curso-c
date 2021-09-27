#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL, "Portuguese");

    int impar[20];

    for (int i = 0; i < 20; i++){
        impar[i] = 2*i + 1;
        printf("O valor no vetor %d é: %d\n", i, impar[i]);
    }

}

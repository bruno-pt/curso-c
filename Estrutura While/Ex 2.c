#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i;
    float n, mf, nf;
    nf = 0;
    i = 1;

    while (i <= 10){
        printf("Digite a nota do Aluno %d: ", i);
            scanf("%f", &n);
                printf("\n");
        nf += n;
        mf = nf/i;
        i++;
    }
    printf("\n\nA média da sala é: %.2f\n\n", mf);
}

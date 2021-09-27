#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int i, v, sp, cn;
    float mn, sn;

    printf("Digite 10 valores, afim de calcular a:\nSoma dos Positivos e a Média dos Negativos.\n");

    sp = cn = 0;
    mn = sn = 0.0;

    for (i=1; i<=10; i++){
        printf("\n%dº Valor: ", i);
            scanf("%d", &v);

            if (v >= 0)
                sp += v;

                else {
                    sn += v;
                    cn += 1;
                    mn = sn / cn;
                }
    }
        printf("\nA Soma dos Positivos é: %d\n", sp);
        printf("\nA Média dos Negativos é: %.2f\n", mn);
}

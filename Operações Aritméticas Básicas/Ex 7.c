#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float valor;

    printf("Ol�, n�s da Loja X estamos oferecendo INCR�VEIS descontos! Veja s�:\n");
    printf("\nPara compras de no m�nimo R$ 200, ser� feito 20%% de desconto!\n");
    printf("Para compras de no m�nimo R$ 600, ser� feito 30%% de desconto!\n");
    printf("Para compras de no m�nimo R$ 1000, ser� feito 45%% de desconto!\n");
    printf("\nCalcule aqui mesmo para saber o valor de sua compra com desconto!\n");
    printf("\nDigite o valor da compra: ");
    scanf("%f", &valor);

    float d20 = valor - (valor * 0.2);
    float d30 = valor - (valor * 0.3);
    float d45 = valor - (valor * 0.45);

        if (valor < 200){
            printf("\nInfelizmente n�o h� desconto... o valor permanecer� R$ %.2f.\n", valor);
            }

        if (199 < valor&&valor < 600){
            printf("\nA sua compra de R$ %.2f ficar� por %.2f!\n", valor, d20);
            }

        if (599 < valor&&valor < 1000){
            printf("\nA sua compra de R$ %.2f ficar� por %.2f!\n", valor, d30);
            }

        if (valor > 999){
            printf("\nA sua compra de R$ %.2f ficar� por %.2f!\n", valor, d45);
            }

}

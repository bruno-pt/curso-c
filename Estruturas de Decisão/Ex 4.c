#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, soma, sub, mult, div;
    char op;

    printf("Digite 2 números e escolha a operação desejada.\n");
    printf("\n1º Número: ");
        scanf("%f", &n1);

    printf("\n2º Número: ");
        scanf("%f", &n2);

    printf("\nEscolha a operação (+, -, *, /): ");
        scanf("%s", &op);

    switch (op) {
        case '+':
            soma = n1 + n2;
            printf("\n\n%.2f %c %.2f = %.2f\n\n", n1, op, n2, soma);
            break;

        case '-':
            sub = n1 - n2;
            printf("\n\n%.2f %c %.2f = %.2f\n\n", n1, op, n2, sub);
            break;

        case '*':
            mult = n1 * n2;
            printf("\n\n%.2f %c %.2f = %.2f\n\n", n1, op, n2, mult);
            break;

        case '/':
            div = n1 / n2;
            printf("\n\n%.2f %c %.2f = %.2f\n\n", n1, op, n2, div);
            break;
    }
}

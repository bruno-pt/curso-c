#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, soma, sub, mult, div;
    char op;

    printf("Digite 2 n�meros e escolha a opera��o desejada.\n");
    printf("\n1� N�mero: ");
        scanf("%f", &n1);

    printf("\n2� N�mero: ");
        scanf("%f", &n2);

    printf("\nEscolha a opera��o (+, -, *, /): ");
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

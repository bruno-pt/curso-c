#include <stdio.h>

/* Fun��o respons�vel pela apresenta��o do programa */
void abertura(){

    printf("\n\nPrograma para Calcular Area de Retangulo\n");
}

/* Fun��o respons�vel pela leitura dos lados */
void lelados(float *l1, float *l2){

    printf("\nDigite l1 = ");
    scanf("%f", l1);
    printf("\nDigite l2 = ");
    scanf("%f", l2);
}

/* Fun��o respons�vel por calcular o valor da �rea */
float calculaarea(float l1, float l2){

    float aux;

    aux = l1*l2;
    return aux;
}

/* Fun��o respons�vel por exibir o valor da �rea */
void mostraarea(float area){

    printf("\nArea = %.2f", area);
}

 /* Fun��o principal do c�digo, tal que chama todas as outras fun��es */
void main (){

    float lado1, lado2, area;

    abertura();
    lelados(&lado1, &lado2);
    area = calculaarea(lado1, lado2);
    mostraarea(area);
}

/* De modo direto, criamos v�rias fun��es, no qual cada uma delas recebe uma instru��o diferente
e chamamos essas em uma ordem definida pelo programador. Como se v�, o programa � sequenciado em uma abertura, na leitura
dos lados do ret�ngulo, na aplica��o desses valores no c�lculo da �rea de tal e, por �ltimo, a exibi��o do valor da �rea. */

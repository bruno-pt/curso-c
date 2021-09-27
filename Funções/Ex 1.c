#include <stdio.h>

/* Função responsável pela apresentação do programa */
void abertura(){

    printf("\n\nPrograma para Calcular Area de Retangulo\n");
}

/* Função responsável pela leitura dos lados */
void lelados(float *l1, float *l2){

    printf("\nDigite l1 = ");
    scanf("%f", l1);
    printf("\nDigite l2 = ");
    scanf("%f", l2);
}

/* Função responsável por calcular o valor da área */
float calculaarea(float l1, float l2){

    float aux;

    aux = l1*l2;
    return aux;
}

/* Função responsável por exibir o valor da área */
void mostraarea(float area){

    printf("\nArea = %.2f", area);
}

 /* Função principal do código, tal que chama todas as outras funções */
void main (){

    float lado1, lado2, area;

    abertura();
    lelados(&lado1, &lado2);
    area = calculaarea(lado1, lado2);
    mostraarea(area);
}

/* De modo direto, criamos várias funções, no qual cada uma delas recebe uma instrução diferente
e chamamos essas em uma ordem definida pelo programador. Como se vê, o programa é sequenciado em uma abertura, na leitura
dos lados do retângulo, na aplicação desses valores no cálculo da área de tal e, por último, a exibição do valor da área. */

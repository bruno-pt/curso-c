#include <stdio.h>
#include <math.h>

/* Função responsável pela apresentação do programa */
void abertura(){

    printf("\n\nPrograma para Calcular Area do Retangulo ou Circunferencia\n\n");
    printf("Para area do Retangulo = 1\n");
    printf("Para area da Circunferencia = 0\n");

}

void escolha(int *es){

    printf("\nEscolha: ");
    scanf("%d", es);
}

/* Função responsável pela leitura do raio */
void leraio(float *r){

    printf("\nDigite o raio = ");
    scanf("%f", r);
}

/* Função responsável pelo cálculo da área */
float calculaarea2(float r){
    float aux2;

    aux2 = r * r * M_PI;
    return aux2;
}


/* Função responsável por exibir o valor da área */
void mostraarea2(float area2){

    printf("\nArea da Circunferencia = %.2f\n", area2);
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

    printf("\nArea do Retangulo = %.2f\n", area);
}

 /* Função principal do código, tal que chama todas as outras funções */
void main (){

    float lado1, lado2, area, area2, raio;
    int esc;

    abertura();
    escolha(&esc);
        if (esc==1){
            lelados(&lado1, &lado2);
            area = calculaarea(lado1, lado2);
            mostraarea(area);
        }
        else {
            leraio(&raio);
            area2 = calculaarea2(raio);
            mostraarea2(area2);
        }
}

/* O código começa com uma apresentação do programa e pede ao usuário qual área deseja calcular.
Nesse caso, temos uma condição aplicada entre as funções. Essa condição irá definir qual área irá ser calculada. */

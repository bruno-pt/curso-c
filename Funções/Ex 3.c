#include <stdio.h>
#include <math.h>

/* Fun��o respons�vel pela apresenta��o do programa */
void abertura(){

    printf("\n\nPrograma para Calcular Area do Retangulo ou Circunferencia\n\n");
    printf("Para area do Retangulo = 1\n");
    printf("Para area da Circunferencia = 0\n");

}

void escolha(int *es){

    printf("\nEscolha: ");
    scanf("%d", es);
}

/* Fun��o respons�vel pela leitura do raio */
void leraio(float *r){

    printf("\nDigite o raio = ");
    scanf("%f", r);
}

/* Fun��o respons�vel pelo c�lculo da �rea */
float calculaarea2(float r){
    float aux2;

    aux2 = r * r * M_PI;
    return aux2;
}


/* Fun��o respons�vel por exibir o valor da �rea */
void mostraarea2(float area2){

    printf("\nArea da Circunferencia = %.2f\n", area2);
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

    printf("\nArea do Retangulo = %.2f\n", area);
}

 /* Fun��o principal do c�digo, tal que chama todas as outras fun��es */
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

/* O c�digo come�a com uma apresenta��o do programa e pede ao usu�rio qual �rea deseja calcular.
Nesse caso, temos uma condi��o aplicada entre as fun��es. Essa condi��o ir� definir qual �rea ir� ser calculada. */

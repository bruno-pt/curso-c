#include <stdio.h>
#include <math.h>

void lecoef(float *a, float *b, float *c){

    printf("\nDigite a > ");
    scanf("%f", a);
    printf("\nDigite b > ");
    scanf("%f", b);
    printf("\nDigite c > ");
    scanf("%f", c);
}

float calculadelta(float a, float b, float c){
    float d;

    d = b*b - 4*a*c;
    return d;
}

int calcularaizes(float a, float b, float delta, float *x1, float *x2){

    if (delta >=0){
        *x1=(-b+sqrt(delta))/(2*a);
        *x2=(-b-sqrt(delta))/(2*a);
        return 1;
    }
        else return 0;
}

void mostraraizes(float x1, float x2){

    printf("\nRaizes Reais Encontradas:");
    printf("\nX1 = %.2f", x1);
    printf("\nX2 = %.2f", x2);
}

void main (){

    float a,b,c,delta,x1,x2;
    int aux;

    lecoef(&a,&b,&c);
    delta=calculadelta(a,b,c);
    aux=calcularaizes(a,b,delta,&x1, &x2);
    if (aux==1)
        mostraraizes(x1, x2);
    else printf("\nNao existem raizes reais!");
}


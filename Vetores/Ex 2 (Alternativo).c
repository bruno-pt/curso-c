#include <stdio.h>
#include <locale.h>
/*
O cálculo é de acordo com uma subtração e uma soma em cada fator respectivamente, assim:

1*1 = 1
0*2 = 0
-1*3 = -3
-2*4 = -8

Depois disso, subtrai o resultado de um pelo o outro, resultando em uma sequência de números ímpares:

1 - 0 = 1
0 - (-3) = 3
- 3 - (-8) = 5

Assim por diante...
*/

int main (){
setlocale(LC_ALL, "Portuguese");

    int impar[20], x, y, xf, yf;
    x = y = xf = yf = 1;

    for (int i = 0; i < 20; i++){
        impar[i] = x*y - (x-xf)*(y+yf);
            if (i > 0){
                impar[i] = (x-xf)*(y+yf) - (x-(xf+1))*(y+(yf+1));
                xf++;
                yf++;
            }
        printf("O valor no vetor %d é: %d\n", i, impar[i]);
    }

}


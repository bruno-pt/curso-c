#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL, "Portuguese");

    float c[4], f, k;

    for (int i = 0; i <= 16; i++){
        if (i <= 4){
            printf("Informe a temperatura %d (em graus Celsius): ", i+1);
            scanf("%f", &c[i]);
        }
            else if (i == 5)
                printf("\n\nConversão para graus Fahrenheit:\n");

            else if (i >= 6 && i <= 10){
                f = ((c[i-6] * 9) / 5) + 32;
                printf("%d: %.2f\n", i-5, f);
            }
            else if (i == 11)
                printf("\n\nConversão para Kelvin:\n");

            else {
                k = c[i-12] + 273.15;
                printf("%d: %.2f\n", i-11, k);
            }
    }

}

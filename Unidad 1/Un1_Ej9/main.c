#include <stdio.h>
#include <stdlib.h>

int main()
{ // Calcular el indice de masa corporal
    float peso, altura, imc;

    printf("Indique peso:\n");
    scanf("%f", &peso);

    printf("\n\nIndique altura: \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nimc: %.1f", imc);

    if(imc < 18.5) {
        printf("\nPeso inferior al normal");
    }
    if(imc >= 18.5 && imc <= 24.9) {
        printf("\nPeso normal");
    }
    if(imc >= 25.0 && imc <= 29.9) {
        printf("\nPeso superior al normal");
    }
    if(imc > 30.0) {
        printf("\nObesidad");
    }


    return 0;
}

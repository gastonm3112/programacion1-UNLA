#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pedir por pantalla 3 numeros flotantes
    //Calcular el promedio de estos 3 numeros

    float num1, num2, num3, promedio;

    printf("Numero 1:\n");
    scanf("%f", &num1);

    printf("\nNumero 2:\n");
    scanf("%f", &num2);

    printf("\nNumero 3:\n");
    scanf("%f", &num3);

    promedio = ((float)num1 + num2 + num3) / ((float) 3);

    printf("\nPromedio: %.2f", promedio);


    return 0;
}

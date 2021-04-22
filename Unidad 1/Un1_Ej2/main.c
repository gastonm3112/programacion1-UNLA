#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Solicitar 2 numeros, dividirlos y mostrar el resultado
    int num1, num2;
    float result;

    printf("Ingresa numero 1:\n");
    scanf("%d", &num1);

    printf("Ingresa numero 2:\n");
    scanf("%d", &num2);

    result = ((float) num1)/ ((float) num2);

    printf("El resultado de la division de %d y %d es: %.2f", num1, num2, result);


    return 0;
}

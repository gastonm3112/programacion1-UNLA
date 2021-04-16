#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pedir por pantalla 2 numeros, los suma y muestra el resultado
    int num1, num2, result;

    printf("Ingrese el primer numero:\n");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero:\n");
    scanf("%d", &num2);

    result = num1 + num2;

    printf("El resultado de la suma de %d y %d es: %d", num1, num2, result);


    return 0;
}

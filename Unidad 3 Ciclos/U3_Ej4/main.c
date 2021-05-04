#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ingresar un numero por teclado
    //Calcular el factorial del numero

    int i, num, factorial = 1;

    printf("-----FACTORIAL DE UN NUMERO-----\n");

    printf("Ingrese un numero:\n");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    printf("\nFactorial de %d:\n", num);
    printf("%d", factorial);


    return 0;
}

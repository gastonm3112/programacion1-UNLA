#include <stdio.h>
#include <stdlib.h>

int main()
{
    //El usuario tipea 20 numeros enteros.
    //Calcular: Suma de los numeros pares
    //El producto de los impares
    //Promedio de los mayores a 5
    // promedio de los mayores a 20
    int numero;
    int sumaPares = 0, productoImpares = 1;
    int contador5 = 0, suma5 = 0;
    int contador20 = 0, suma20 = 0;
    float promedio5 = 0, promedio20 = 0;

    for(int contador = 1; contador <= 20; contador++){
        printf("Numero: ");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            sumaPares = sumaPares + numero;
        } else {
            productoImpares = productoImpares * numero;
        }

        if(numero > 5){
            contador5 = contador5 + 1;
            suma5 = suma5 + numero;
        }

        if(numero > 20){
            contador20 = contador20 + 1;
            suma20 = suma20 + numero;
        }
    }

    promedio5 = ( (float) suma5 / (float) contador5);
    promedio20 = ( (float) suma20 / (float) contador20);

    printf("\n\nSuma de numeros pares: %d", sumaPares);
    printf("\nProducto de numeros impares: %d", productoImpares);
    printf("\nPromedio mayores a 5: %.2f", promedio5);
    printf("\nPromedio mayores a 20: %.2f", promedio20);


    return 0;
}

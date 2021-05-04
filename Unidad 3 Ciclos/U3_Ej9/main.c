#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Crear un programa que pida al usuario numeros positivos
    //y vaya calculando la suma de todos ellos
    //Finaliza cuando se teclea un numero negativo o cero o la suma supere los 1500

    int numero;
    int sumaNumeros = 0;

    printf("numero: ");
        scanf("%d", &numero);

    while(numero > 0){

        sumaNumeros = sumaNumeros + numero;
        if(sumaNumeros > 1500){
            break;
        }
        printf("numero: ");
        scanf("%d", &numero);
    }

    printf("\n\nSuma de numeros: %d", sumaNumeros);

    return 0;
}

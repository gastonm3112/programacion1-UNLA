#include <stdio.h>
#include <stdlib.h>

int main()
{
    //El usuario ingresa 20 numeros enteros en el vector
    //Se calculan l maximo y el minimo, se muestran por pantalla
    //Por ultimo se muestran los valores del vector desde el ultimo al primero

    int vector[20];

    for(int i = 0; i < 20; i++){
        printf("Ingrese numero entero: ");
        scanf("%d", &vector[i]);
    }

    int maximo = vector[0];
    int minimo = vector[0];

    for(int i = 0; i < 20; i++){

        if(vector[i] < minimo){
            minimo = vector[i];
        }

        if(vector[i] > maximo){
            maximo = vector[i];
        }
    }

    printf("\n\nMaximo-----> %d", maximo);
    printf("\nMinimo-----> %d", minimo);

    printf("\n-----Vector descendente-----");
    for(int i = 19; i >= 0; i--){
        printf("\n%d ", vector[i]);
    }
    return 0;
}

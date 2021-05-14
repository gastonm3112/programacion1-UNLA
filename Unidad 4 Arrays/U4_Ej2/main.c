#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Se ingresan 10 alturas en un vector
    //Se encuentran y muestran la maxima y la minima
    //Finalmente se muestran las alturas que estan en las posiciones pares [0], [2]...

    float alturas[10];

    for(int i = 0; i < 10; i++){
        printf("Ingrese altura: ");
        scanf("%f", &alturas[i]);
    }

    float minimo = alturas[0];
    float maximo = alturas[0];

    for(int i = 0; i < 10; i++){
        if(alturas[i] < minimo){
            minimo = alturas[i];
        }
        if(alturas[i] > maximo){
            maximo = alturas[i];
        }
    }

    printf("\n\n----Alturas minima y maxima-----");
    printf("\nAltura minima-----> %.2f", minimo);
    printf("\nAltura axima-----> %.2f", maximo);

    printf("\n\n-----Alturas en indices pares-----");
    for(int i = 0; i < 10; i += 2){
        printf("\nindice---> %d -- Valor---> %.2f", i, alturas[i]);
    }

    return 0;
}

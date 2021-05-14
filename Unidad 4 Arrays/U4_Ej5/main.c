#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    //Este programa genera un vector de 50 posiciones
    //Calcula la frecuencia de valores del vector y los guarda en un nuevo vector
    //Calcula la moda del vector
    //Calcula el promedio
    //Calcula el desvio estandar de los numeros del vector
    srand(time(NULL));
    int vector1[30];

    for(int i = 0; i < 30; i++){
        int numAleatorio = rand() % 50;
        vector1[i] = numAleatorio;
    }

    printf("---Muestro Vector---\n");
    for(int i = 0; i < 30; i++){
        printf("%d - ", vector1[i]);
    }

    int vectorAux[30];
    printf("\n\n");
    //Guardo los valores del vector original en un vector auxiliar
    for(int i = 0; i < 30; i++){
        vectorAux[i] = vector1[i];
    }

    for(int i = 0; i < 30; i++){
        printf("%d - ", vectorAux[i]);
    }


    return 0;
}

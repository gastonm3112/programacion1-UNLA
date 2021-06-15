#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Se creara un vector con 30 numeros enteros aleatorios
    srand(time(NULL));
    int vector[30];

    for(int i = 0; i < 30; i++){
        int numeroAleatorio = rand();

        vector[i] = numeroAleatorio;
    }

    for(int i = 0; i < 30; i++){
        printf("numero %d---> %d\n", i, vector[i]);
    }
    return 0;
}

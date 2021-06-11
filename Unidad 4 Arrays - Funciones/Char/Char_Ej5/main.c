#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Ordena alfabeticamente 2 palabras

    char palabra1[20] = " ";
    char palabra2[20] = " ";
    int resComparacion = 0;

    printf("Ingrese la primer palabra: ");
    fflush(stdin);
    gets(palabra1);

    printf("\n\nIngrese la segunda palabra: ");
    fflush(stdin);
    gets(palabra2);

    resComparacion = strcmp(palabra1, palabra2);

    if(resComparacion < 0){
        printf("\n\nPalabra 1: %s va antes que palabra 2: %s", palabra1, palabra2);
    } else {
        printf("\n\nPalabra 2: %s va antes que palabra 1: %s", palabra2, palabra1);
    }

    return 0;
}

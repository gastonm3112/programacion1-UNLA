#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Se ingresan 3 palabras
    //Se concatenan las 2 primeras letras de cada palabra
    //Se muestra si la primera y segunda palabra son iguales

    char palabra1[20] = " ";
    char palabra2[20] = " ";
    char palabra3[20] = " ";

    printf("Ingrese palabra 1: ");
    fflush(stdin);
    gets(palabra1);

    printf("Ingrese palabra 2: ");
    fflush(stdin);
    gets(palabra2);

    printf("Ingrese palabra 3: ");
    fflush(stdin);
    gets(palabra3);

    //Comparo que las 2 primeras palabras sean iguales
    int comparacion = strcmp(palabra1, palabra2);

    if(comparacion == 0){
        printf("\n\nLa primera palabra %s es igual a la segunda palabra %s", palabra1, palabra2);
    } else {
        printf("\n\nLa primera palabra %s NO es igual a la segunda palabra %s", palabra1, palabra2);
    }
    return 0;
}

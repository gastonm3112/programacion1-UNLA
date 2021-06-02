#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Se ingresan 3 palabras y se devuelve su longitud

    char palabra1[20] = " ";
    char palabra2[20] = " ";
    char palabra3[20] = " ";

    printf("Ingrese palabra 1: ");
    fflush(stdin);
    gets(palabra1);

    printf("\nIngrese palabra 2: ");
    fflush(stdin);
    gets(palabra2);

    printf("\nIngrese palabra 3: ");
    fflush(stdin);
    gets(palabra3);

    printf("\n\nTamaño palabra 1: %d", strlen(palabra1));
    printf("\nTamaño palabra 2: %d", strlen(palabra2));
    printf("\nTamaño palabra 3: %d", strlen(palabra3));

    return 0;
}

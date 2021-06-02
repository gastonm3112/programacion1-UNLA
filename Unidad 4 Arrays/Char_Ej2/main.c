#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Se ingresa una oración y se muestra en reverso

    char oracion[20] = " ";
    char reversa[20] = " ";

    int contadorLength = 0;

    printf("Ingrese una oracion: \n");
    fflush(stdin);
    gets(oracion);

    while(oracion[contadorLength] != '\0'){

        contadorLength++;
    }

    printf("\n\nReversa: ");

    for(int i = contadorLength - 1; i > -1; i--){
         printf("%c", oracion[i]);
    }



    return 0;
}

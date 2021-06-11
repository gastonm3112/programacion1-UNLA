#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Ingresar una oracion y decidir si es palindromo o no
    char oracion[20]= "";
    char nuevaOracion[20] = "";

    printf("Ingrese una oracion para saber si es Palindromo: ");
    fflush(stdin);
    gets(oracion);


    printf("\n\nLongitud oracion: %d", strlen(oracion));

    if(oracion[0] == oracion[strlen(oracion)-1]){
        printf("\nEs Palindromo");
    } else{
        printf("\nNo es Palindromo");
    }
    return 0;
}

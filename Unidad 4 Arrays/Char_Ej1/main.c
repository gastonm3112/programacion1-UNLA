#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Este programa cuenta las vocales y consonantes que tiene una oracion

    char vocales[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    char consonantes[] = { 'b', 'B', 'c', 'C', 'd', 'D', 'f', 'F', 'g', 'G', 'h', 'H', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z' };

    char oracion[20] = " ";

    printf("-----CONTADOR DE VOCALES Y CONSONANTES-----\n\n");
    printf("Por favor ingrese una oracion o palabra: \n");
    fflush(stdin);
    gets(oracion);


    int contadorVocales = 0;
    int contadorConsonantes = 0;
    for(int i = 0; i < 20; i++){
        for(int vocal = 0; vocal < 10; vocal++){
            if(oracion[i] == vocales[vocal]){
                contadorVocales++;
            }
        }
        for(int consonante = 0; consonante < 42; consonante++){
            if(oracion[i] == consonantes[consonante]){
                contadorConsonantes++;
            }
        }
    }

    printf("\n\nNumero de vocales: %d", contadorVocales);
    printf("\nNumero de consonantes: %d", contadorConsonantes);
    return 0;
}

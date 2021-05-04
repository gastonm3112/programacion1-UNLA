#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Mostrar los primeros 20 numeros pares usando While
    int contador = 1;

    while(contador <= 20){
        if(contador % 2 == 0){
            printf("%d\n", contador);
        }

        contador = contador + 1;
    }

    return 0;
}

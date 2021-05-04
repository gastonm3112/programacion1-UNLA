#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Ingresar un numero y decir si es primo o no

    int num, contador = 1, resto = 0;

    printf("---Saber si un numero es primo---");
    printf("\n\nIngrese un numero: ");
    scanf("%d", &num);

    while(contador <= num){
        if(num % contador == 0){
            resto = resto + 1;
        }

        contador = contador + 1;
    }

    if(resto == 2){
        printf("\nEl numero %d es primo\n", num);
    }else{
        printf("\nEl numero %d NO es primo\n", num);
    }

    return 0;
}

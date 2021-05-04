#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pedir un numero por consola
    //Mostrar por pantalla ES PRIMO o NO ES PRIMO

    int i, num, resto=0, topeFor;

    printf("-----Saber si su numero es primo-----");

    printf("\nIngrese un numero:\n");
    scanf("%d", &num);

    if(num < 0){
        topeFor = topeFor * (-1);    
    } else {
        topeFor = num;    
    }

    for(i = 1; i < topeFor + 1; i++) {
        if(num % i == 0) {
            resto++;
        }
    }

    if(resto == 2) {
        printf("\n%d ES PRIMO", num);
    } else {
        printf("\n%d NO ES PRIMO", num);
    }


    return 0;
}

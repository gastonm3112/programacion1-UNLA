#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pedir que se ingrese un numero,
    //decir si cumple con que sea par y multiplo de 5

    int num;

    printf("Ingrese un numero: \n");
    scanf("%d", &num);

    if((num % 2 == 0) && (num % 5 == 0)){
        printf("\nEl numero %d es par y multiplo de 5\n", num);
    } else{
        printf("\nEl numero %d no cumple con ambas condiciones\n", num) ;
    }

    return 0;
}

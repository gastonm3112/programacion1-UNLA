#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Este programa calcula cuantas cifras tiene un numero entero positivo

    int num = 0, cifras = 1;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    while(num / 10 > 0){
        num = num / 10;
        cifras++;
    }

    printf("\nCifras del numero: %d", cifras);
    return 0;
}

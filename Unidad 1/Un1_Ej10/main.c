#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ingresa un a�o y dice SI ES BISIESTO O NO ES BISIESTO

    int anio;

    printf("Ingrese un a�o: \n");
    scanf("%d", &anio);

    if((anio % 4 == 0) && !(anio % 100 == 0 && anio % 400 != 0)){
        printf("\nESTE A�O ES BISIESTO");
    } else{ printf("\nESTE A�O NO ES BISIESTO"); }


    return 0;
}

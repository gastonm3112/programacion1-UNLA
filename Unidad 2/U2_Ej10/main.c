#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ingresa un año y dice SI ES BISIESTO O NO ES BISIESTO

    int anio;

    printf("Ingrese un año: \n");
    scanf("%d", &anio);

    if((anio % 4 == 0) && !(anio % 100 == 0 && anio % 400 != 0)){
        printf("\nESTE AÑO ES BISIESTO");
    } else{ printf("\nESTE AÑO NO ES BISIESTO"); }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ingresar un numero que represente un dia de la semana
    //Mostrar por pantalla:
    //1 - Lunes... Cualquier otro numero mostrar ERROR

    int dia;

    printf("Ingrese un numero para un dia de la semana\n");
    scanf("%d", &dia);

    switch(dia){

    case 1:
        printf("\n1 - Lunes");
        break;
    case 2:
        printf("\n2 - Martes");
        break;
    case 3:
        printf("\n3 - Miercoles");
        break;
    case 4:
        printf("\n4 - Jueves");
        break;
    case 5:
        printf("\n5 - Viernes");
        break;
    case 6:
        printf("\n6 - Sabado");
        break;
    case 7:
        printf("\n7 - Domingo");
        break;
    default:
        printf("\nERROR - Ingrese un numero valido (1-7)");
        break;
    }

    return 0;
}

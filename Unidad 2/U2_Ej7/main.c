#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pedir dos numeros, mostrar por pantalla el mayor de ellos

    int num1, num2;

    printf("Ingrese numero 1: \n");
    scanf("%d", &num1);

    printf("\nIngrese numero 2: \n");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("\nEl numero %d es mayor que el numero %d.", num1, num2);
    } else{
        printf("\nEl numero %d es mayor que el numero %d.", num2, num1);
    }

    return 0;
}

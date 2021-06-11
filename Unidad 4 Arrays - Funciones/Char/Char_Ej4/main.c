#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Se ingresan 2 nombres
    //Se comparan para ver si son iguales
    //Si no lo son se genera un tercer nombre

    char nombre1[20] = "";
    char nombre2[20] = "";
    int contadorDiferencia = 0;

    printf("Ingrese el nombre 1: ");
    fflush(stdin);
    gets(nombre1);

    printf("\nIngrese el nombre 2: ");
    fflush(stdin);
    gets(nombre2);

    for(int i = 0; i < 20; i++){
        if(nombre1[i] != nombre2[i]){
            contadorDiferencia++;
        }
    }

    if(contadorDiferencia > 0){
        printf("\n\nAhora te llamas %s %s", nombre1, nombre2);
    } else {
        printf("\n\nLos nombres son iguales");
    }


    return 0;
}

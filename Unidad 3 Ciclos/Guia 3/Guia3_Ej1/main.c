#include <stdio.h>
#include <stdlib.h>

int main()
{
    //El usuario debe ingresar una contraseņa(numerica)
    //El programa terminara cuando el usuario ingresa la contraseņa 4567

    int password = 0;

    do{
        printf("Ingrese su contraseņa: ");
        scanf("%d", &password);
    } while(password != 4567);


    return 0;
}

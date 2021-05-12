#include <stdio.h>
#include <stdlib.h>

int main()
{
    //El usuario debe ingresar una contraseña(numerica)
    //El programa terminara cuando el usuario ingresa la contraseña 4567

    int password = 0;

    do{
        printf("Ingrese su contraseña: ");
        scanf("%d", &password);
    } while(password != 4567);


    return 0;
}

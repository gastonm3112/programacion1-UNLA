#include <stdio.h>
#include <stdlib.h>

int main()
{
    //El usuario debe ingresar una contrase�a(numerica)
    //El programa terminara cuando el usuario ingresa la contrase�a 4567

    int password = 0;

    do{
        printf("Ingrese su contrase�a: ");
        scanf("%d", &password);
    } while(password != 4567);


    return 0;
}

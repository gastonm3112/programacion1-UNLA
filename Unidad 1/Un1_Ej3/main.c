#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Solicitar nombre, apellido, edad, altura y genero y mostrarlos por pantalla

    char nombre[20], apellido[20], genero;
    int edad;
    float altura;

    printf("Ingrese su nombre: ");
    scanf("%s", &nombre);

    printf("Ingrese su apellido: ");
    scanf("%s", &apellido);

    printf("Ingrese su genero: ");
    fflush(stdin);
    scanf("%c", &genero);

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Ingrese su altura: ");
    scanf("%f", &altura);

    printf("Sus datos son los siguientes:\n");
    printf("Nombre: %s \n", nombre);
    printf("Apellido: %s \n", apellido);
    printf("Genero: %c \n", genero);
    printf("Edad: %d \n", edad);
    printf("Altura: %f", altura);

    return 0;
}

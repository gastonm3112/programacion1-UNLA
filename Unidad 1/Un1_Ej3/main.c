#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Solicitar nombre, apellido, edad, altura y genero
    //s mostrarlos por pantalla

    char nombre[20], apellido[20], genero;
    int edad;
    float altura;

    printf("Ingrese su nombre: ");
    fflush(stdin);
    scanf("%s", &nombre);

    printf("Ingrese su apellido: ");
    fflush(stdin);
    scanf("%s", &apellido);

    printf("Ingrese su genero: ");
    fflush(stdin);
    scanf("%c", &genero);

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Ingrese su altura: ");
    scanf("%f", &altura);

    printf("\nSus datos son los siguientes:\n");
    printf("Nombre: %s \n", nombre);
    printf("Apellido: %s \n", apellido);
    printf("Genero: %c \n", genero);
    printf("Edad: %d \n", edad);
    printf("Altura: %.2f", altura);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Mostrar el resultado de (a==b)&&((3<b)||(b<a)), a y b son ingresados por el ususario
    int a, b;

    printf("Ingrese a: ");
    scanf("%d", &a);

    printf("Ingrese b: ");
    scanf("%d", &b);

    printf("El resultado ingresado para los valores ingresados es: %d", (a==b)&&((3<b)||(b<a)));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Programa que muestra la tabla de multiplicar del 6

    int tabla = 1;
    for(int i = 1; i <= 10; i++){

        tabla = i * 6;

        printf("%d x 6 = %d\n", i, tabla);
    }
    return 0;
}

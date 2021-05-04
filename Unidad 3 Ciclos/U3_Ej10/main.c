#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Solicitar un numero n al usuario
    //Conseguir el numero de la posicion n en la sucesion de fibonacci

    int n;
    int a = 1, b = 1, c;
    int posicionN;

    printf("Ingrese un valor n:");
    scanf("%d", &n);

    for(int contar = 1; contar < n + 1; contar++){
        printf("%d ", b);
        c = a + b;
        b = a;
        a = c;
    }

    return 0;
}

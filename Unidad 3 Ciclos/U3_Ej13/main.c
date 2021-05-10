#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Dibujar
    /*

    *****
    *****
    *****
    ------
    1
    12
    123
    1234
    ------
    12345
    1234
    123
    12
    1
    ------
        1
       123
      12345
    -------
     12345
      123
       1
    */

    //Asteriscos
    for(int renglon = 1; renglon <= 3; renglon++){
        for(int columna = 1; columna <= 5; columna++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n---------------\n\n");

    //Triangulo ascendente
    for(int renglon = 1; renglon <= 4; renglon++){
        for(int columna = 1; columna <= renglon; columna++){
            printf("%d", columna);
        }
        printf("\n");
    }

    printf("\n---------------\n\n");

    //Triangulo descendente
    for(int renglon = 5; renglon >= 1; renglon--){
        for(int columna = 1; columna <= renglon; columna++){
            printf("%d", columna);
        }
        printf("\n");
    }

    printf("\n---------------\n\n");

    //Piramide ascendente
    for(int renglon = 1; renglon <= 3; renglon++){
       for(int columna = 4; columna >= renglon - 1; columna--){
        printf(" ");
       }
       for(int columna = 1; columna <= 2 * renglon - 1; columna++){
        printf("%d", columna);
       }
        printf("\n");
    }

    printf("\n---------------\n\n");

    //Piramide descendente
    for(int renglon = 3; renglon >= 1; renglon--){
        for(int columna = 3; columna >= renglon - 1; columna--){
            printf(" ");
        }

        for(int columna = 1; columna <= 2 * renglon - 1; columna++){
            printf("%d", columna);
        }
        printf("\n");
    }
    return 0;
}

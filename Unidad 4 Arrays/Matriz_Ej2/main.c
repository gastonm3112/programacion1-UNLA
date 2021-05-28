#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Se generan 2 matrices aleatorias
    //Se producen operaciones de suma, resta y multiplicacion
    //creando nuevas matrices
    srand(time(0));

    int ren = 4;
    int col = 4;
    int aleatorio = 0;
    int Matriz1[col][ren];
    int Matriz2[col][ren];

    for(int renglon = 0; renglon < ren; renglon++){
        for(int columna = 0; columna < col; columna++){
            aleatorio = rand() % 10;
            Matriz1[columna][renglon] = aleatorio;
        }
    }

    for(int renglon = 0; renglon < ren; renglon++){
        for(int columna = 0; columna < col; columna++){
            aleatorio = rand() % 10;
            Matriz2[columna][renglon] = aleatorio;
        }
    }

    printf("---Matriz 1---\n\n");

    for(int renglon = 0; renglon < ren; renglon++){
        for(int columna = 0; columna < col; columna++){
            printf(" %d ", Matriz1[columna][renglon]);
        }
        printf("\n");
    }

     printf("\n\n---Matriz 2---\n\n");

    for(int renglon = 0; renglon < ren; renglon++){
        for(int columna = 0; columna < col; columna++){
            printf(" %d ", Matriz2[columna][renglon]);
        }
         printf("\n");
    }

    //Sumo, Resto Matrices
    int matrizSuma[col][ren];
    int matrizResta[col][ren];

    for(int renglon = 0; renglon < ren; renglon++){
        for(int columna = 0; columna < col; columna++){
            matrizSuma[columna][renglon] = Matriz1[columna][renglon] + Matriz2[columna][renglon];
            matrizResta[columna][renglon] = Matriz1[columna][renglon] - Matriz2[columna][renglon];
        }
    }

    //Realizo la Matriz Producto
    int matrizProducto[col][ren];
    int producto = 0;
     for(int renglon = 0; renglon < ren; renglon++){
        for(int columna = 0; columna < col; columna++){
             producto = Matriz1[columna][renglon] * Matriz2[columna][renglon];
             matrizProducto[columna][renglon] = producto;
        }
    }

    //Muestro la MatrizSuma
    printf("\n\n---Matriz Suma---\n\n");
    for(int renglon = 0; renglon < ren; renglon++){
        for(int columna = 0; columna < col; columna++){
            printf(" %d ", matrizSuma[columna][renglon]);
        }
         printf("\n");
    }


    //Muestro la MatrizResta
    printf("\n\n---Matriz Resta---\n\n");
    for(int renglon = 0; renglon < ren; renglon++){
        for(int columna = 0; columna < col; columna++){
            printf(" %d ", matrizResta[columna][renglon]);
        }
         printf("\n");
    }

     //Muestro la MatrizProducto
    printf("\n\n---Matriz Producto---\n\n");
    for(int renglon = 0; renglon < ren; renglon++){
        for(int columna = 0; columna < col; columna++){
            printf(" %d ", matrizProducto[columna][renglon]);
        }
         printf("\n");
    }

    return 0;
}

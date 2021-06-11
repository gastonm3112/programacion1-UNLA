#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tituloPrograma(char titulo[100]);
void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);


int main()
{
    srand(time(0));
    tituloPrograma("Menu de seleccion");

    printf("\n\n*Este programa le permitira cargar\nUn vector, una matriz y mostrara el resultado de su eleccion.*\n\n");

    int seleccion;
    int tamv;
    int vector[tamv];
    int ren;
    int col;
    int r = 0, c = 0;
    int matriz[ren][col];


    do {
        printf("1.Cargar Vector");
        printf("\n2.Cargar Matriz");
        printf("\n0.Salir\n\n");
        scanf("%d", &seleccion);



        switch(seleccion){

        case 0:
            printf("\nSaliendo del programa\n");
            break;

        case 1:
            printf("\nSeleccione el tamaño del vector: ");
            scanf("%d", &tamv);

            cargarVector(vector, tamv);
            printf("\nAqui tienes el vector que solicitaste");
            mostrarVector(vector, tamv);

            break;

        case 2:

            printf("\nSeleccione cantidad de filas de la Matriz: ");
            scanf("%d", &ren);

            printf("\nSeleccione cantidad de columnas de la Matriz: ");
            scanf("%d", &col);

            for(r = 0; r < ren; r++){
                for(c = 0; c < col; c++){
                    matriz[r][c] = rand() % 50;
                }
            }

            printf("\nAqui tienes la Matriz que solicitaste:\n\n");
            for(r = 0; r < ren; r++){
                for(c = 0; c < col; c++){
                    printf("  %d  ", matriz[r][c]);
                }
                printf("\n");
            }

            break;

        }
    } while(seleccion != 0);




    return 0;
}

void tituloPrograma(char titulo[100]){

    printf("--------------------------------\n");
    printf("------ %s ------\n", titulo);
    printf("--------------------------------\n");
}

void cargarVector(int v[], int tam){


    for(int i = 0; i < tam; i++){
        v[i] = rand() % 45;
    }


}
void mostrarVector(int v[], int tam){
    printf("\n[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", v[i]);
    }
     printf("]\n");
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tituloPrograma(char titulo[100]);
int numsAleatoriosEntre(int min, int max);
void cargarVector(int v[], int tam, int min, int max);
void mostrarVector(int v[], int tam);
void VectorOrdenadoDeMenorMayor(int v[], int tam);
void VectorOrdenadoDeMayorMenor(int v[], int tam);


int main()
{
    srand(time(0));
    //Se crea un menu para que el usuario decida:
    //Cargar el vector, mostrarlo y
    //De que manera ordenar el vector (ASC, DESC)

    tituloPrograma("PRESENTE 11-06");

    int tam;
    int opcion;
    int minVector;
    int maxVector;

    printf("De que tamanio quiere que sea el vector? : ");
    scanf("%d", &tam);

    int vector[tam];

    while(opcion != 0){

        printf("\nPor favor seleccione una opcion\n");
        printf("1. Crear Vector");
        printf("\n2. Mostrar Vector");
        printf("\n3. Ordenar Vector de menor a mayor");
        printf("\n4. Ordenar Vector de mayor a menor");
        printf("\n0. Salir del programa");
        printf("\n\nOpcion: ");
        scanf("%d", &opcion);

        switch(opcion){
        case 0:
            printf("\nSaliendo del programa\n");
            break;

        case 1:
            printf("\nIndique valor minimo de ingreso al Vector: ");
            scanf("%d", &minVector);
            printf("\n\nIndique el valor maximo de ingreso al Vector: ");
            scanf("%d", &maxVector);
            cargarVector(vector, tam, minVector, maxVector);
            break;

        case 2:
            printf("\n\n-----ESTE ES TU VECTOR-----\n");
            mostrarVector(vector, tam);
            break;

        case 3:
            printf("\n\n-----VECTOR ORDENADO DE MENOR A MAYOR-----\n");
            VectorOrdenadoDeMenorMayor(vector, tam);
            mostrarVector(vector, tam);
            break;

        case 4:
            printf("\n\n-----VECTOR ORDENADO DE MAYOR A MENOR-----\n");
            VectorOrdenadoDeMayorMenor(vector, tam);
            mostrarVector(vector, tam);
            break;

        default:
            printf("\nERROR! NO EXISTE ESA OPCION");
            break;

        }


    }

    return 0;
}

void tituloPrograma(char titulo[100]){

    printf("--------------------------------\n");
    printf("------ %s ------\n", titulo);
    printf("--------------------------------\n");
}


int numsAleatoriosEntre(int min, int max){

    int resultado = min + rand() % (max - min + 1);

    return resultado;

}
void cargarVector(int v[], int tam, int min, int max){

    for(int i = 0; i < tam; i++){

        v[i] = numsAleatoriosEntre(min, max);
    }
}

void mostrarVector(int v[], int tam){

     printf("\n[");
     for(int i = 0; i < tam; i++){

        printf(" %d ", v[i]);
    }
    printf("]\n");
}

void VectorOrdenadoDeMenorMayor(int v[], int tam){
    int temp;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam - 1; j++){
            if(v[j] > v[j + 1]){
                temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
            }
        }
    }
}

void VectorOrdenadoDeMayorMenor(int v[], int tam){

    int temp;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam - 1; j++){
            if(v[j] < v[j + 1]){
                temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
            }
        }
    }
}

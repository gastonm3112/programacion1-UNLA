#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tituloPrograma(char titulo[100]);
void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);
void mostrarVectorInvertido(int v[], int tam);
int maximoVector(int v[], int tam);
int minimoVector(int v[], int tam);
int posMaxVector(int v[], int tam);
int posMinVector(int v[], int tam);
float promedioVector(int v[], int tam);
int cantParesVector(int v[], int tam);
int cantImparesVector(int v[], int tam);

int main()
{
    srand(time(NULL));

    tituloPrograma("PRESENTE 04-06");

    int tam = 10;
    int vector[tam];

    cargarVector(vector, tam);
    mostrarVector(vector, tam);
    printf("\n---Vector Invertido---\n");
    mostrarVectorInvertido(vector, tam);

    printf("\nEl maximo del vector es: %d", maximoVector(vector, tam));
    printf("\nLa posicion del maximo es: %d", posMaxVector(vector, tam));

    printf("\n\nEl minimo del vector es: %d", minimoVector(vector, tam));
    printf("\nLa posicion del minimo es: %d", posMinVector(vector, tam));

    printf("\n\nEl promedio del vector es: %.2f", promedioVector(vector, tam));

    printf("\n\nCantidad de numeros pares del Vector: %d", cantParesVector(vector, tam));
    printf("\nCantidad de numeros impares del Vector: %d\n", cantImparesVector(vector, tam));


    return 0;
}


void tituloPrograma(char titulo[100]){

    printf("--------------------------------\n");
    printf("------ %s ------\n", titulo);
    printf("--------------------------------\n");
}

void cargarVector(int v[], int tam){

    for(int i = 0; i < tam; i++){

        v[i] = 10 + rand() % 90;
    }

}


void mostrarVector(int v[], int tam){
    printf("\n[");
    for(int i = 0; i < tam; i++){
        printf(" %d, ", v[i]);
    }
    printf("]\n");
}
void mostrarVectorInvertido(int v[], int tam){

    printf("\n[");
    for(int i = tam - 1; i > -1; i--){
        printf(" %d, ", v[i]);
    }
    printf("]\n");

}
int maximoVector(int v[], int tam){

    int maximo = v[0];

    for(int i = 0; i < tam; i++){
        if(v[i] > maximo){
            maximo = v[i];
        }
    }
    return maximo;

}
int minimoVector(int v[], int tam){

    int minimo = v[0];

    for(int i = 0; i < tam; i++){
        if(v[i] < minimo){
            minimo = v[i];
        }
    }
    return minimo;

}
int posMaxVector(int v[], int tam){

    int maximo = v[0];
    int posMax = 0;

    for(int i = 0; i < tam; i++){
        if(v[i] > maximo){
            maximo = v[i];
            posMax = i;
        }
    }
    return posMax;

}
int posMinVector(int v[], int tam){

    int minimo = v[0];
    int posMin = 0;

    for(int i = 0; i < tam; i++){
        if(v[i] < minimo){
            minimo = v[i];
            posMin = i;
        }
    }
    return posMin;

}
float promedioVector(int v[], int tam){
    int sum = 0;
    float promedio = 0;

    for(int i = 0; i < tam; i++){
        sum = sum + v[i];
    }

    promedio = (float) sum / (float)tam;

    return promedio;

}
int cantParesVector(int v[], int tam){

    int cantPares = 0;

    for(int i = 0; i < tam; i++){
        if(v[i] % 2 == 0){
            cantPares++;
        }
    }
    return cantPares;
}
int cantImparesVector(int v[], int tam){

    int cantImpares = 0;

    for(int i = 0; i < tam; i++){
        if(v[i] % 2 != 0){
            cantImpares++;
        }
    }
    return cantImpares;
}

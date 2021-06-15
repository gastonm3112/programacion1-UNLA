#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    //Este programa genera un vector de 50 posiciones
    //Calcula la frecuencia de valores del vector y los guarda en un nuevo vector
    //Calcula la moda del vector
    //Calcula el promedio
    //Calcula el desvio estandar de los numeros del vector
    srand(time(NULL));
    int tam = 10;
    int vector[tam];
    int suma = 0;

    //Ingreso de numeros aleatorios y suma de datos para sacar el promedio
    for(int i = 0; i < tam; i++){
        int numAleatorio = rand() % 50;
        vector[i] = numAleatorio;
        suma += vector[i];
    }

    printf("---Muestro Vector---\n");
    printf("[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", vector[i]);
    }
    printf("]");

    //Generando el Vector frecuencia
    int numero = 0;
    int frecuencia= 0;
    int vectorFrecuencia[tam];
    for(int i = 0; i < tam; i++){
        numero = vector[i];

        for(int j = 0; j < tam; j++){
            if(numero == vector[j]){
                frecuencia++;
            }
        }
        vectorFrecuencia[i] = frecuencia;
        frecuencia = 0;
    }

    printf("\n\n---Vector de Frecuencias---\n");
    printf("[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", vectorFrecuencia[i]);
    }
    printf("]");

    //Moda del vector
    int mayor = vectorFrecuencia[0];
    int moda = 0;
    for(int i = 0; i < tam; i++){
        if(vectorFrecuencia[i] > mayor){
            mayor = vectorFrecuencia[i];
            moda = i;
        }
    }
    printf("\n\nModa: %d", vector[moda]);

    //Promedio
    float promedio = suma / (float)tam;
    printf("\nPromedio: %.2f", promedio);

    //Desvio estandar
    float difAlCuadrado = 0;
    float sumaCuadrados = 0;
    float varianza = 0; //sumaCuadrados / tam -1
    float desvioEstandar = 0;

    for(int i = 0; i < tam; i++){
        difAlCuadrado = pow(vector[i] - promedio, 2);
        sumaCuadrados += difAlCuadrado;

    }
    varianza =  sumaCuadrados / (tam - 1);
    desvioEstandar = pow(varianza, 0.5);

    printf("\nDesvio Estandar: %.2f", desvioEstandar);


    return 0;
}

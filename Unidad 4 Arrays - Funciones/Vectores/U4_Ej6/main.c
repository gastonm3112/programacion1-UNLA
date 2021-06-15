#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Se definen 2 vectores de 3 elementos flotantes
    //Realizar:
    //A: v1 + v2 que genera un nuevo Vector
    //B: v1 - v2 que genera un nuevo Vector
    //C: v1 * v2 que resulta en un numero. Si es 0 son perpendiculares
    //D: 3 * v1 que resulta en un nuevo vector

    //Genero mis 2 vectores flotantes
    int tam = 3;
    float v1[tam], v2[tam];
    for(int i = 0; i < tam; i++){
        printf("\nValor para v1: ");
        scanf("%f", &v1[i]);

        printf("\nValor para v2: ");
        scanf("%f", &v2[i]);
    }
    //Los muestro en pantalla
    printf("\n\n-----V1-----");
    printf("\n[");
    for(int i = 0; i < tam; i++){
        printf(" %.2f ", v1[i]);
    }
    printf("]");

    printf("\n\n-----V2-----");
    printf("\n[");
    for(int i = 0; i < tam; i++){
        printf(" %.2f ", v2[i]);
    }
    printf("]");
    //Genero el vectorSuma, Resta y Multiplicado por 3
    float vSuma[tam];
    float vResta[tam];
    float vPor3[tam];
    for(int i = 0; i < tam; i++){

        vSuma[i] = v1[i] + v2[i];

        vResta[i] = v1[i] - v2[i];

        vPor3[i] = 3 * v1[i];
    }
    //Lo imprimo
    printf("\n\n-----Vector Suma-----");
    printf("\n[");
    for(int i = 0; i < tam; i++){
        printf(" %.2f ", vSuma[i]);
    }
    printf("]");


    printf("\n\n-----Vector Resta-----");
    printf("\n[");
    for(int i = 0; i < tam; i++){
        printf(" %.2f ", vResta[i]);
    }
    printf("]");

    printf("\n\n-----V1 Multiplicado por 3-----");
    printf("\n[");
    for(int i = 0; i < tam; i++){
        printf(" %.2f ", vPor3[i]);
    }
    printf("]");
    //Multiplico los vectores dando un numero
    float multiplicacion = 0;
    float sumaMultiplicacion = 0;
    for(int i = 0; i < tam; i++){

        multiplicacion = v1[i] * v2[i];

        sumaMultiplicacion += multiplicacion;
    }
    //Lo muestro a ese numero
    printf("\n\nMultiplicacion de V1 y V2: %.2f", sumaMultiplicacion);
    if(sumaMultiplicacion == 0) {
        printf("\nEstos Vectores son perpendilulares");
    }
    return 0;
}

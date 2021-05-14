#include <stdio.h>
#include <stdlib.h>

int main()
{
    //El usuario ingresa el tamaño del vector
    //El usuario ingresa numeros enteros hasta completar el array
    //Luego se realizan las siguientes acciones:
    //La suma de los numeros pares
    //El promedio de numeros impares
    //Valores maximos y minimos y sus posiciones
    //Mostrar el arreglo al derecho y al reves

    int largo;
    printf("Indique el largo del Arreglo: ");
    scanf("%d", &largo);

    int arregloUsuario[largo];

    for(int i = 0; i < largo; i++){
        printf("\nIngrese un numero entero: ");
        scanf("%d", &arregloUsuario[i]);
    }

    int sumaPares = 0, sumaImpares = 0, contarImpares = 0;
    int minimo = arregloUsuario[0];
    int posicionMinimo = minimo;
    int maximo = arregloUsuario[0];
    int posicionMaximo = maximo;

    // Recorriendo el Array para obtener valores definidos arriba
    for(int j = 0; j < largo; j++){
        if(arregloUsuario[j] % 2 == 0){
            sumaPares = sumaPares + arregloUsuario[j];
        } else{
            sumaImpares = sumaImpares + arregloUsuario[j];
            contarImpares = contarImpares + 1;
        }

        if(arregloUsuario[j] > maximo){
            maximo = arregloUsuario[j];
            posicionMaximo = j;
        }

        if(arregloUsuario[j] < minimo){
            minimo = arregloUsuario[j];
            posicionMinimo = j;
        }
    }

    float promedioImpares = (float) sumaImpares / (float) contarImpares;

    //Imprimiendo los valores obtenidos
    printf("\n\nSuma de numeros pares---> %d", sumaPares);
    printf("\nPromedio de numeros impares---> %.2f", promedioImpares);
    printf("\nEl maximo numero es---> %d --- En posicion---> %d", maximo, posicionMaximo);
    printf("\nEl minimo numero es---> %d --- En posicion---> %d\n", minimo, posicionMinimo);

    //Mostrar valores del Array al derecho y al reves
    for(int derecho = 0; derecho < largo; derecho++){
        printf("\nPosiion--> %d --- Valor --> %d", derecho, arregloUsuario[derecho]);
    }

    for(int reves = largo - 1; reves >= 0; reves--){
        printf("\nAl reves-- Posicion--> %d --- Valor--> %d", reves, arregloUsuario[reves]);
    }


    return 0;
}

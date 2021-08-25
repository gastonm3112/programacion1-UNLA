#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Vehiculo {
    char patente[6];
    int anio;
    char color[20];
    float precio;
};

struct Vehiculo cargarVehiculoPorTeclado();
void cargarVehiculos(struct Vehiculo arr[], int tam);
void mostrarVehiculo(struct Vehiculo v);
void mostrarVehiculos(struct Vehiculo arr[], int tam);

int main()
{
    printf("----- PRESENTE 20-08 -----\n\n");

    int tam = 5;
    struct Vehiculo vehiculos[tam];

    cargarVehiculos(vehiculos, tam);

    mostrarVehiculos(vehiculos, tam);



    return 0;
}

struct Vehiculo cargarVehiculoPorTeclado(){

        struct Vehiculo v;

        printf("\n--- INGRESE LOS DATOS DEL NUEVO VEHICULO ---\n");

        printf("\nIngrese la patente: ");
        fflush(stdin);
        gets(v.patente);

        printf("\nIngrese el anio: ");
        scanf("%d", &v.anio);

        printf("\nIngrese el color: ");
        fflush(stdin);
        gets(v.color);

        printf("\nIngrese el precio: ");
        scanf("%f", &v.precio);

        return v;
};

void cargarVehiculos(struct Vehiculo arr[], int tam){

    for(int i = 0; i < tam; i++){
        arr[i] = cargarVehiculoPorTeclado();
    }
};

void mostrarVehiculo(struct Vehiculo v){

     printf("\n----- DATOS DEL VEHICULO -----\n");
        printf("\nPatente ----> %s", v.patente);
        printf("\nAnio -------> %d", v.anio);
        printf("\nColor ------> %s", v.color);
        printf("\nPrecio -----> %.2f\n", v.precio);

};

void mostrarVehiculos(struct Vehiculo arr[], int tam){

    for(int i = 0; i < tam; i++){

        mostrarVehiculo(arr[i]);
    }
};



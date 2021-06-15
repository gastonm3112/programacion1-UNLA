#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int esBisiesto(int anio);
int sonIguales(char nombre1[20], char nombre2[20]);
int esMayorDeEdad(int anioNacimiento, int anioHoy);
int esPalindromo(char oracion[100]);

int main()
{

     printf("-----El anio es bisiesto?-----");
    //Casos verdaderos
    printf("\n-----> %d", esBisiesto(1996));
    printf("\n-----> %d",esBisiesto(2000));

    //Casos Falsos
    printf("\n-----> %d",esBisiesto(2010));
    printf("\n-----> %d",esBisiesto(2005));

    printf("\n\n-----Sos mayor de edad?-----");
    //Casos verdaderos
    printf("\n-----> %d", esMayorDeEdad(1989, 2021));
    printf("\n-----> %d",esMayorDeEdad(1997, 2021));

    //Casos Falsos
    printf("\n-----> %d",esMayorDeEdad(2010, 2021));
    printf("\n-----> %d",esMayorDeEdad(2005, 2021));

    printf("\n\n-----Es palindromo?-----\n");
    //Verdaderos
    printf("\n-----> %d", esPalindromo("anita lava la tina"));
    printf("\n-----> %d", esPalindromo("rotor"));
    //Falsos
    printf("\n-----> %d", esPalindromo("motor"));
    printf("\n-----> %d", esPalindromo("maica graba cosas alocadas"));

    printf("\n\n-----Son iguales?-----\n");
    //Verdaderos
    printf("\n-----> %d", sonIguales("Gaston", "Gaston"));
    printf("\n-----> %d", sonIguales("Maica", "Maica"));
    //Falsos
    printf("\n-----> %d", sonIguales("Fernando", "Flavia"));
    printf("\n-----> %d", sonIguales("Olga", "Rosa"));



    return 0;
}

int esBisiesto(int anio){
    int resultado;
    int condicion = (anio % 4 == 0) && !(anio % 100 == 0 && anio % 400 != 0);

    if(condicion == 1){
        resultado = 1;
    } else {
        resultado = 0;
    }

    return resultado;
}

int esMayorDeEdad(int anioNacimiento, int anioHoy){
    int edad = anioHoy - anioNacimiento;

    if(edad > 18){
        return 1;
    }

    return 0;
}

int esPalindromo(char oracion[100]){
    int resultado;
    if(oracion[0] == oracion[strlen(oracion)-1]){
       resultado = 1;
    } else {
        resultado = 0;
    }

    return resultado;
}

int sonIguales(char nombre1[20], char nombre2[20]) {

    int resultado;

    int comparacion = strcmp(nombre1, nombre2);

    if(comparacion == 0){
        resultado = 1;
    } else {
        resultado = 0;
    }

    return resultado;

}



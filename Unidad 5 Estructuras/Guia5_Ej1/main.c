#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Temperatura {
    int minima;
    int maxima;
    int dia;
};

int aleatorio(int min, int max);
struct Temperatura cargarTemperaturaAleatoria();
void cargarTemperaturas(struct Temperatura arr[], int tam);
void mostrarTemperatura(struct Temperatura temp);
void mostrarTemperaturas(struct Temperatura arr[], int tam);
void mostrarTemperaturasFahrenheit(struct Temperatura arr[], int tam);
int temperaturaMinima(struct Temperatura arr[], int tam);
int temperaturaMaxima(struct Temperatura arr[], int tam);

int main()
{
    srand(time(0));

    //Declaro vector de temperaturas
    int tam = 5;
    struct Temperatura temperaturas[tam];

    //Cargo el vector
    cargarTemperaturas(temperaturas, tam);

    //Muestro
    mostrarTemperaturas(temperaturas, tam);

    // Temperaturas Fahrenheit
    mostrarTemperaturasFahrenheit(temperaturas, tam);

    //mostrar dia con minima y maxima
    int diaMinima;
    diaMinima = temperaturaMinima(temperaturas, tam);

    int diaMaxima;
    diaMaxima = temperaturaMaxima(temperaturas, tam);

    printf("\n\nDia con minima mas baja: %d con Temp. Minima de: %d\n", temperaturas[diaMinima].dia, temperaturas[diaMinima].minima);
    printf("\nDia con maxima mas alta: %d con Temp. Maxima de: %d\n", temperaturas[diaMaxima].dia, temperaturas[diaMaxima].maxima);

    return 0;
}

int aleatorio(int min, int max){

      int numAleatorio = min + rand()% (max- min + 1);

      return numAleatorio;
}

struct Temperatura cargarTemperaturaAleatoria(){

    struct Temperatura t;

    t.dia = aleatorio(1, 31);
    t.maxima = aleatorio(0, 40);
    t.minima = aleatorio(0,40);

    return t;
}

void cargarTemperaturas(struct Temperatura arr[], int tam){

    for(int i = 0; i < tam; i++){
        arr[i] = cargarTemperaturaAleatoria();
    }

}

void mostrarTemperatura(struct Temperatura temp){

    printf("\n----- TEMPERATURA CENTRIGRADOS-----\n");
    printf("Dia: %d \nMinima: %d C\nMaxima: %d C\n", temp.dia, temp.minima, temp.maxima);

}

void mostrarTemperaturas(struct Temperatura arr[], int tam){

    for(int i = 0; i < tam; i++){
        mostrarTemperatura(arr[i]);
    }
}

void mostrarTemperaturasFahrenheit(struct Temperatura arr[], int tam){

    for(int i = 0; i < tam; i++){
        printf("\n----- TEMPERATURA FAHRENHEIT-----\n");
        printf("\nMinima Fahrenheit: %d F", ((arr[i].minima * (9/5)) + 32) );
        printf("\nMaxima Fahrenheit: %d F\n", ((arr[i].maxima * (9/5)) + 32) );
    }
}

int temperaturaMinima(struct Temperatura arr[], int tam){

    int minima = arr[0].minima;
    int posMinima = 0;

    for(int i = 0; i < tam; i++){
        if(arr[i].minima < minima){
            minima = arr[i].minima;
            posMinima = i;
        }
    }
    return posMinima;
}

int temperaturaMaxima(struct Temperatura arr[], int tam){

    int maxima = arr[0].maxima;
    int posMaxima = 0;

    for(int i = 0; i < tam; i++){
        if(arr[i].maxima > maxima){
            maxima = arr[i].maxima;
            posMaxima = i;
        }
    }
    return posMaxima;
}



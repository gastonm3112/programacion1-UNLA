#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void tituloPrograma(char nombre[50]);
int calcularEdad(int nacimiento, int anioActual);
float calculoIMC(float peso, float altura);
void dibujarTriangulo(int base, int altura);
void calcularHipotenusa(float cateto1, float cateto2);
int cantidadVecesQueApareceLaLetra(char letra, char oracion[100]);
int pedirEnteroPorTeclado();
float pedirFlotantePorTeclado();

int main()
{
    tituloPrograma("Ejercicio 1 de Funciones");


//    printf("---Calculamos tu edad---\n\n");
//    int nacimiento, anioActual;
//
//    printf("Indica anio de nacimiento: ");
//    scanf("%d", &nacimiento);
//    printf("\nIndica anio actual: ");
//    scanf("%d", &anioActual);
//    printf("\nTu edad es: %d", calcularEdad(nacimiento, anioActual));
//
//    printf("\n\n-----Calculamos el IMC-----\n\n");
//    float peso, altura;
//
//    printf("Indique peso: ");
//    scanf("%f", &peso);
//    printf("\nIndique altura: ");
//    scanf("%f", &altura);
//    printf("\nSu imc es: %.2f", calculoIMC(peso, altura));

//    printf("\n\n-----Dibujo de Triangulo-----\n\n");
//    dibujarTriangulo(6, 7);
//
//    printf("\n\n-----Calculo de Hipotenusa-----\n\n");
//    calcularHipotenusa(2.50, 23.5);

//    printf("\n\n-----Repeticion de Letra-----\n\n");
//    char letra, oracion[100] = " ";
//
//    printf("Que letra desea contar? : ");
//    fflush(stdin);
//    scanf("%c", &letra);
//
//    printf("\nIngrese la oracion en la que contar: \n");
//    fflush(stdin);
//    gets(oracion);
//
//    printf("\nLa letra %c se encuentra repetida %d veces.", letra, cantidadVecesQueApareceLaLetra(letra, oracion));

//    printf("\n\n-----Pedir entero por teclado-----\n\n");
//    int numeroEntero = 0;
//
//    pedirEnteroPorTeclado();
//    scanf("%d", &numeroEntero);
//    printf("\nNumero ingresado: %d", numeroEntero);


    printf("\n\n-----Pedir flotante por teclado-----\n\n");
    float numeroFlotante = 0;

    pedirFlotantePorTeclado();

    scanf("%f", &numeroFlotante);
    printf("\nNumero ingresado: %.2f", numeroFlotante);



    return 0;
}

void tituloPrograma(char nombre[50]){

    printf("--------------------------\n");
    printf(" %s \n", nombre);
    printf("--------------------------\n\n");

}

int calcularEdad(int nacimiento, int anioActual){

    int edad = anioActual - nacimiento;

    return edad;
}

float calculoIMC(float peso, float altura){

    float imc = peso / (altura * altura);

    return imc;
}

void dibujarTriangulo(int base, int altura){
    for(int a = 1; a <= base; a++){
        for(int b = 1; b <= altura - a + 1; b++){
            printf("%d", b);
        }
        printf("\n");
    }
}

void calcularHipotenusa(float cateto1, float cateto2){
    float sumaCatetos = pow(cateto1, 2) + pow(cateto2, 2);
    float hipotenusa = pow(sumaCatetos, 0.5);
    printf("%.2f", hipotenusa);
}

int cantidadVecesQueApareceLaLetra(char letra, char oracion[100]){
    int tamanioOracion = strlen(oracion);
    int contadorLetra = 0;

    for(int i = 0; i < tamanioOracion; i++){
        if(letra == oracion[i]){
            contadorLetra++;
        }
    }

    return contadorLetra;
}

int pedirEnteroPorTeclado(){
    printf("\nIngrese un numero entero: ");

}

float pedirFlotantePorTeclado(){
    printf("\nIngrese un numero flotante: ");

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Calcular el Promedio de los numeros que ingresa el usuario
	// Finaliza cuando ingresa el 0
	//Input: n numeros
	//Output: Promedio

	int numero, contNumeros = 0, sumaNumeros = 0;
	float promedio = 0;

	do {
        printf("Ingrese un numero:");
        scanf("%d", &numero);

        contNumeros = contNumeros + 1;
        sumaNumeros = sumaNumeros + numero;

	} while(numero != 0);

	promedio = ((float) sumaNumeros / (float) contNumeros);

    if(promedio > 0){
        printf("\n\nPromedio: %.2f", promedio);
    } else {
        printf("No se ingresaron numeros distintos que 0");
    }
    return 0;
}

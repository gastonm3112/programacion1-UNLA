#include <stdio.h>
#include <stdlib.h>

int main()
{
     //Pedir un numero y transformarlo en binario
	//Input: Un numero
	//Output: El numero en binario
	int numero, numBinario = 0, restosNum = 1;

	printf("Ingresar un numero:\n");
	scanf("%d", &numero);

	while (numero >= 1){
        if(numero % 2 == 1){
            numBinario = numBinario + restosNum;
        }
        numero = numero/2;

        restosNum = restosNum * 10;
	}

	printf("\n\nEl binario es: %d\n", numBinario);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pedir por pantalla 3 numeros
    //Mostrar los 3 numeros de mayor a menor

    int backup, num1, num2, num3;

    printf("Numero 1:\n");
    scanf("%d", &num1);

    printf("\nNumero 2:\n");
    scanf("%d", &num2);

    printf("\nNumero 3:\n");
    scanf("%d", &num3);

    if(num1 < num2){
        if(num2 < num3){
            backup = num1;
            num1 = num3;
            num3 = backup;
        }
    }

    if(num2 < num1){
        if(num1 < num3){
            backup = num3;
            num3 = num2;
            num2 = num1;
            num1 = backup;
        }
    }

    if(num2 < num3){
        if(num3 < num1){
            backup = num2;
            num2 = num3;
            num3 = backup;
        }
    }

    if(num3 < num1){
        if(num1 < num2){
            backup = num1;
            num1 = num2;
            num2 = backup;
        }
    }

    if(num1 < num3){
        if(num3 < num2){
            backup = num1;
            num1 = num2;
            num2 = num3;
            num3 = backup;
        }
    }

    printf("\n%d\n", num1);
    printf("%d\n", num2);
    printf("%d", num3);

    return 0;
}

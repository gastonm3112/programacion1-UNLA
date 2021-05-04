#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Mostrar todos los numeros divisibles por 2, 6 y 7
    // que no sean divisibles por 4 y sean menores que 10000

    int i, divisibles, noDivisibles;

    for(i = 1; i < 10000; i++){
        divisibles = (i % 2 == 0) && (i % 6 == 0) && (i % 6 == 0);
        noDivisibles = !(i % 4 == 0);

        if(divisibles && noDivisibles){
            printf("%d\n", i);
        }
    }
    return 0;
}

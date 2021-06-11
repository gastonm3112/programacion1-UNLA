#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   //Se crea una matriz de 12 columnas y 4 renglones
   //Representan las ganancias de 4 empresas durante el año
   //Columnas: Ganascias por mes
   //Renglones: Empresas
   // Se solicita:
   //A- Encontrar el TOTAL ganado por cada empresa al año
   //B- Cuanto se gano por mes contando a TODAS las empresas
   srand(time(0));

   int col = 12;
   int ren = 4;
   int numeroAleatorio = 0;
   int matriz[col][ren];

   for(int empresas = 0; empresas < ren; empresas++){
    for(int meses = 0; meses < col; meses++){
        numeroAleatorio = rand() % 100;
        matriz[meses][empresas] = numeroAleatorio;
    }
   }

    //Muestro la matriz creada
    printf("---Matriz de empresas---\n\n");
    for(int empresas = 0; empresas < ren; empresas++){
        printf("Empresa %d :", empresas + 1);
        for(int meses = 0; meses < col; meses++){
            printf("  %d  ", matriz[empresas][meses]);
        }
        printf("\n");
    }

    //Ganancias cada empresa al año
    int gananciaEmpresa = 0;
    printf("\n---Ganancia de cada empresa al anio---\n");
    for(int empresas = 0; empresas < ren; empresas++){
        for(int meses = 0; meses < col; meses++){
            gananciaEmpresa += matriz[empresas][meses];
        }
        printf("\nGanancias empresa %d: %d", empresas + 1, gananciaEmpresa);
        gananciaEmpresa = 0;
    }

    //Ganancia por mes de todas las empresas
    int gananciaMes = 0;
    printf("\n\n---Ganancia por mes de cada empresa---\n\n");
    for(int meses = 0; meses < col; meses++){
        for(int empresas = 0; empresas < ren; empresas++){
            gananciaMes += matriz[empresas][meses];
        }
        printf("\nGanancia Total Mes %d: %d", meses + 1, gananciaMes);
        gananciaMes = 0;
    }
    return 0;
}

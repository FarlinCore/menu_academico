#include <stdio.h>
#include "calculos.h"

int main(void) {
    while (1)
    {
        int opcion;
        printf("\n=====BIENVENIDO AL SISTEMA DE CALCULOS=====\n");
        printf("1. Calcular promedio\n");
        printf("2. Determinar numero primo\n");
        printf("3. Calcular factorial\n");
        printf("4. Generar tabla de multiplicar\n");
        printf("5. Salir\n");
        printf("Elige una opcion --> ");

        //validamos entrada
        if (scanf("%d", &opcion) != 1)
        {
            printf("Error: Digite un numero valido.\n");
            limpiarBuffer();
            continue;
        }


        switch (opcion)
        {
            case 1:
                calcularPromedio();
                break;
            case 2:

                calcularNumeroPrimo();
                break;
            case 3:
                calcularFactorial();
                break;
            case 4:
                generarTablaMultiplicar();
                break;
            case 5:
                printf("¡Gracias por usar este programa!\n");
                return 0;
                break;
            default:
                printf("Debes de seleccionar un numero entre 1 y 5\n");
                break;
        }
    }
    return 0;

}
#include "calculos.h"
#include <stdio.h>
#include <stdbool.h>

int  validarValorNumerico(int valor, char mensaje[60], int rangoMinimo)
{
    printf(mensaje);
    while (scanf("%d", &valor) != 1 || valor < rangoMinimo ) {
        printf("Error: Digite un numero valido mayor que %d.\n", rangoMinimo);
        limpiarBuffer();
    }
    return valor;
}
void limpiarBuffer()
{
    while (getchar() != '\n');
}

void calcularPromedio()
{
     unsigned int cantidad;
     float promedio;
     float numerosSumados = 0;

    printf("--Calculo de promedio--\n");
    printf("Introduce la cantidad de valores: ");
    while ((scanf("%u", &cantidad) != 1) || cantidad > 0 ) {
        printf("Error: Digite un numero valido y positivo.\n");
        limpiarBuffer();
    }
     float numeros[cantidad];

     int contador = 1;
     for (int i = 0; i < cantidad; i++) {
         printf("Introduce tu numero %d: ", contador);
         while (scanf("%f", &numeros[i]) != 1) {
             printf("Error: Digite un numero valido.\n");
             limpiarBuffer();
         }
         contador++;
         numerosSumados += numeros[i];
     }
     promedio = numerosSumados / cantidad;
     printf("--> Promedio: \t\t%.2f\n\n", promedio);
}

void calcularNumeroPrimo()
{
    bool primo = true;
    int numero;
     printf("--Determinacion de numeros primos\n");
    numero = validarValorNumerico(numero, "Introduce tu numero: ", 1);

    if (numero < 2) {
        primo = false;
    }
    else {
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                primo = false;
            }
        }
    }
    if (primo) {
        printf("%d --> Es efectivamente un numero primo!\n", numero);
    }
    else {
        printf("%d --> No es un numero primo!\n",numero);
    }
 }

void calcularFactorial() {
    int numero;
    numero = validarValorNumerico(numero, "Introduce tu numero: ", 0);
    int fact = 1;

    printf("-- Factorial del numero %d --\n", numero);
    for (int i = 1; i <= numero; i++) {
        fact *= i;
    }

    printf("-- El numero factoria de %d es => %d\n", numero, fact);
}

void generarTablaMultiplicar() {
    int numero;
    int longitudTabla;

    numero = validarValorNumerico(numero, "De que numero deseas la tabla?: ", 0);
    longitudTabla = validarValorNumerico(longitudTabla, "Hasta que numero desea la tabla?", 0);

    printf("-- Tabla de multiplicar del numero %d --", numero);
    for (int i = 0; i <= longitudTabla; i++) {
        int multiplicacion = numero * i;
        printf("%d x %d = %d\n", numero, i, multiplicacion);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para imprimir una matriz
void imprimirMatriz(int matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para calcular la matriz transpuesta
void calcularTranspuesta(int matriz[][100], int transpuesta[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int filas, columnas;

    // Pedir al usuario las dimensiones de la matriz
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    // Crear la matriz
    int matriz[100][100];

    // Generar números aleatorios entre 0 y 100 y llenar la matriz
    srand(time(0));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101; // Número aleatorio entre 0 y 100
        }
    }

    // Imprimir la matriz original
    printf("Matriz original:\n");
    imprimirMatriz(matriz, filas, columnas);

    // Calcular la matriz transpuesta
    int transpuesta[100][100];
    calcularTranspuesta(matriz, transpuesta, filas, columnas);

    // Imprimir la matriz transpuesta
    printf("Matriz transpuesta:\n");
    imprimirMatriz(transpuesta, columnas, filas);

    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para imprimir el arreglo completo
void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {  // Imprimimos todos los elementos
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Función de ordenación por inserción
void insercion(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Mover los elementos mayores que key a una posición adelante
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insertar key en su posición correcta
        arr[j + 1] = key;
    }
}

int main() {
    int n = 10000;  // Tamaño del arreglo
    int arr[n];     // Declaramos un arreglo de tamaño 10,000

    // Semilla para la generación de números aleatorios
    srand(time(NULL));

    // Llenamos el arreglo con 10,000 números aleatorios
    for (int i = 0; i < n; i++) {
        arr[i] = rand();  // Genera números aleatorios en el rango de 0 a RAND_MAX
    }

    printf("Arreglo original (todos los elementos):\n");
    imprimirArreglo(arr, n);  // Imprimimos todos los 10,000 elementos
    printf("\n");

    // Ordenamos el arreglo
    insercion(arr, n);

    printf("Arreglo ordenado (todos los elementos):\n");
    imprimirArreglo(arr, n);  // Imprimimos todos los 10,000 elementos

    return 0;
}
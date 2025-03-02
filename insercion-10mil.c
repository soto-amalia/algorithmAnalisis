#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // Se añade para usar la función time() en la generación de números aleatorios

void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insercionVisual(int arr[], int n) {
    int i, key, j;
    
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        printf("Iteración %d:\n", i);
        printf("Elemento a insertar (key): %d\n", key);
        printf("Estado actual del arreglo: ");
        imprimirArreglo(arr, n);
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
        
        printf("Arreglo después de insertar %d: ", key);
        imprimirArreglo(arr, n);
        printf("------------------------------------\n");
        
        printf("Presiona Enter para continuar...");
        getchar();  
    }
}

int main() {
    int n = 10000;  // Cambiamos el tamaño del arreglo a 10,000
    int arr[n];     // Declaramos un arreglo de tamaño 10,000

    // Semilla para la generación de números aleatorios
    srand(time(NULL));

    // Llenamos el arreglo con números aleatorios entre 0 y 9999
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;  // Genera números aleatorios entre 0 y 9999
    }

    printf("Arreglo original (primeros 10 elementos): ");
    imprimirArreglo(arr, 10);  // Solo imprimimos los primeros 10 elementos para no saturar la salida
    printf("\n");
    
    insercionVisual(arr, n);
    
    printf("\nArreglo ordenado (primeros 10 elementos): ");
    imprimirArreglo(arr, 10);  // Solo imprimimos los primeros 10 elementos para no saturar la salida
    
    return 0;
}
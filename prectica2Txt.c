#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shellSort(int arr[], int n);
void imprimeArreglo(int n, int arr[]);

int main() {
    FILE *file = fopen("numero10millones.txt", "r");
    if (file == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    
    int *arr;
    int n = 10000000; // Se espera 10 millones de números
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        fclose(file);
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        if (fscanf(file, "%d", &arr[i]) != 1) {
            printf("Error al leer el archivo.\n");
            free(arr);
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    
    clock_t inicio = clock();
    shellSort(arr, n);
    clock_t fin = clock();
    
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ordenamiento: %.2f segundos\n", tiempo);
    
    // Imprimir los primeros 100 números ordenados para verificar
    imprimeArreglo(100, arr);
    
    free(arr);
    return 0;
}

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void imprimeArreglo(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
//bUSQUEDA BINARIA requiere que el arcchivos esten previamente ordenados 
/*INSERCION -

*/
#include <stdio.h>
#include <stdlib.h>

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
            j--;//el arreglo va a ir en reversa
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

    int arr[] = {7, 50, 1, 2, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Arreglo original: ");
    imprimirArreglo(arr, n);
    printf("\n");
    
    insercionVisual(arr, n);
    
    printf("\nArreglo ordenado: ");
    imprimirArreglo(arr, n);
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*Funciones*/
void contarDigitos();
void adivinarNumero();

// Función principal
int main() {
    int opcion;
    do
    {
        /* code */
        printf("\nMenu:\n");
        printf("1. Contar digitos \n");
        printf("2. Adivinar un numero\n");
        printf("3. Zodiaco \n");
        printf("4. Terminar");
        
        scanf("%d",& opcion);
        switch (opcion) {
            case 1:
                contarDigitos(); // Llama a la función del ejercicio 2
                break;
            case 2:
                adivinarNumero(); // Llama a la función del ejercicio 4
                break;
            case 4:   
    } while (opcion!=4);
}}
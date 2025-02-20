#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*Funciones*/
void contarDigitos();
void adivinarNumero();

// Función principal
int main() {
    int opcion;
    do{
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
            case 3:
                printf("Implementar");
                break;   
            case 4:
                printf("Saliendo del programa");
                break;

            default:
                printf("Opcion no valida, intenta de nuevo");
    } }while (opcion!=4);
}

void contarDigitos(){
    int numero=0;
    int contador=0;
    printf("Ingresa un número: ");
    scanf("%d", &numero);
    int temporal=numero;
    while (temporal!=0)
    {
        temporal=temporal/10;
        contador++;

    }
    printf("El numero tiene %d digitos",contador);

    
}
void adivinarNumero() {
    int num, intento, contador = 0;
    
    srand(time(NULL));
    num = rand() % 100 + 1; // Número aleatorio entre 1 y 100

    printf("Adivina el número (entre 1 y 100): ");
    do {
        scanf("%d", &intento);
        contador++;
        if (intento > num) {
            printf("Muy alto. Intenta de nuevo: ");
        } else if (intento < num) {
            printf("Muy bajo. Intenta de nuevo: ");
        } else {
            printf("¡Correcto! Adivinaste en %d intentos.\n", contador);
        }
    } while (intento != num);
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Calculadora en lenguaje C

// Macros para definir colores
#define RED     "\033[1;31m"
#define GREEN   "\033[0;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

// Función para sumar dos números

float sumar(float a, float b) {
    float c;
    c = a + b;
    return c;
}

// Función para restar dos números

float restar(float a, float b) {
    float c;
    c = a- b;
    return c;
}

// Función para multiplicar dos números

float multiplicar(float a, float b) {
    float c;
    c = a * b;
    return c;
}

// Función para dividir dos números

float dividir(float a, float b) {
    float c;
    c = a / b;
    return c;
}

int main (){
    float a, b, resultado;
    int opcion;
    printf(MAGENTA "\n ¡Bienvenido! Usted está utilizando una calculadora\n" RESET);
    printf(RED "Se pueden realizar las siguientes operaciones\n" RESET);
    while(1){
        printf(RED "Por favor elija una operación:\n" RESET);
        printf(RED "1." RESET BLUE "Sumar\n" RESET);
        printf(RED "2." RESET BLUE "Restar\n" RESET);
        printf(RED "3." RESET BLUE "Multiplicar\n" RESET);
        printf(RED "4." RESET BLUE "Dividr\n" RESET);
        printf(RED "5." RESET BLUE "Salir\n" RESET);
        printf(CYAN "Ingrese la operación que desea utilizar:\n" RESET);
        scanf("%d", &opcion);
    
        switch (opcion) {
            case 1:
                printf(YELLOW "Usted eligió sumar\n" RESET);
                printf( GREEN "Ingrese el primer número:\n");
                scanf("%f", &a);
                printf("Ingrese el segundo número:\n");
                scanf("%f", &b);
                resultado = sumar(a, b);
                printf(RESET CYAN "El resultado de la suma es:" RESET RED " %.2f\n" RESET, resultado);
                break;
            case 2:
                printf(YELLOW "Usted eligió restar\n" RESET);
                printf(GREEN "Ingrese el minuendo\n");
                scanf("%f", &a);
                printf("Ingrese el sustraendo\n");
                scanf("%f", &b);
                resultado = restar(a, b);
                printf(RESET CYAN "El resultado de la resta es:" RESET RED " %.2f\n" RESET, resultado);
                break;
            case 3:
                printf(YELLOW "Usted eligió multiplicar\n" RESET);
                printf(GREEN "Ingrese el multiplicando:\n");
                scanf("%f", &a);
                printf("Ingrese el multiplicador:\n");
                scanf("%f", &b);
                resultado = multiplicar(a, b);
                printf(RESET CYAN "El resultado de la multiplicación es:" RESET RED " %.2f\n" RESET, resultado);
                break;
            case 4:
                printf(YELLOW "Usted eligió dividir\n" RESET);
                printf(GREEN "Ingrese el dividendo:\n");
                scanf("%f", &a);
                printf("Ingrese el divisor:\n");
                scanf("%f", &b);
                if (b == 0) {
                    printf(RESET RED "Error: División por cero no permitida.\n" RESET);
                    continue; // Volver al menú sin realizar la división
                }
                resultado = dividir(a, b);
                printf(RESET CYAN "El resultado de la división es:" RED " %.2f\n" RESET, resultado);
                break;
            case 5:
                printf(MAGENTA "Saliendo de la calculadora. ¡Hasta luego!\n" RESET);
                return 0;
            default:
                printf(RED "Opción no válida. Por favor, elija una opción entre 1 y 5.\n" RESET);
        }
    }
}
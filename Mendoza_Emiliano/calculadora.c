#include <stdio.h>
#include <stdlib.h>

float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);
void mostrarMenu();

int main() {
    int opcion;
    float num1, num2, resultado;
    char continuar;

    do {
        system("clear");
        mostrarMenu();
        printf("Seleccione una opción (1-5): ");
        scanf("%d", &opcion);

        if(opcion == 5) {
            printf("Saliendo de la calculadora...\n");
            exit(0);
        }

        printf("Ingrese el primer número: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo número: ");
        scanf("%f", &num2);

        switch(opcion) {
            case 1:
                resultado = sumar(num1, num2);
                printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2:
                resultado = restar(num1, num2);
                printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 4:
                if(num2 == 0) {
                    printf("\nError: No se puede dividir entre cero.\n");
                } else {
                    resultado = dividir(num1, num2);
                    printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                }
                break;
            default:
                printf("\nOpción no válida.\n");
        }

        printf("\n¿Desea realizar otra operación? (s/n): ");
        scanf(" %c", &continuar);

    } while(continuar == 's' || continuar == 'S');

    return 0;
}

float sumar(float a, float b) {
    return a + b;
}
float restar(float a, float b) {
    return a - b;
}
float multiplicar(float a, float b) {
    return a * b;
}
float dividir(float a, float b) {
    return a / b;
}
void mostrarMenu() {
    printf("\n");
    printf("************************************\n");
    printf("*        CALCULADORA BÁSICA       *\n");
    printf("************************************\n");
    printf("* 1. Suma                         *\n");
    printf("* 2. Resta                        *\n");
    printf("* 3. Multiplicación               *\n");
    printf("* 4. División                     *\n");
    printf("* 5. Salir                        *\n");
    printf("************************************\n");
    printf("\n");
}
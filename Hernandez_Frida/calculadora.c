#include <stdio.h>

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

void mostrarMenu() {
    printf("================================\n");
    printf("     Calculadora <3        \n");
    printf("================================\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Salir\n");
    printf("================================\n");
    printf("Selecciona una opcion: ");
}

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingresa el primer numero: ");
            scanf("%f", &num1);
            printf("Ingresa el segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                resultado = suma(num1, num2);
                printf("Resultado de la suma: %.2f\n", resultado);
                break;
            case 2:
                resultado = resta(num1, num2);
                printf("Resultado de la resta: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacion(num1, num2);
                printf("Resultado de la multiplicacion: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = division(num1, num2);
                    printf("Resultado de la division: %.2f\n", resultado);
                } else {
                    printf("Error: Division por cero no permitida.\n");
                }
                break;
            case 5:
                printf("Saliendo de la calculadora. Adios!\n");
                break;
            default:
                printf("Opcion invalida. Por favor, intenta de nuevo.\n");
        }

        printf("\n");
    } while (opcion != 5);

    return 0;
}

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}
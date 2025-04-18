#include <stdio.h>

int main() {
    int eleccion, operador1, operador2;

    // Mostramos el menú
    printf("CALCULADORA\n\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &eleccion);

    // Pedimos los operandos
    printf("Introduce un numero: ");
    scanf("%d", &operador1);
    printf("Introduce otro numero: ");
    scanf("%d", &operador2);

    // Ejecutamos la operación elegida
    switch (eleccion) {
        case 1:
            printf("Resultado: %d\n", operador1 + operador2);
            break;
        case 2:
            printf("Resultado: %d\n", operador1 - operador2);
            break;
        case 3:
            printf("Resultado: %d\n", operador1 * operador2);
            break;
        case 4:
            if (operador2 == 0) {
                printf("No se puede dividir entre 0.\n");
            } else {
                printf("Resultado: %d\n", operador1 / operador2);
            }
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}

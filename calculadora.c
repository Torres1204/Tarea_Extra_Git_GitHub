#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operador;

    printf("Ingrese una operación (ejemplo: 4 + 5): ");
    scanf("%lf %c %lf", &num1, &operador, &num2);

    if (operador == '+') {
        resultado = num1 + num2;
    } else if (operador == '-') {
        resultado = num1 - num2;
    } else if (operador == '*') {
        resultado = num1 * num2;
    } else if (operador == '/') {
        if (num2 != 0)
            resultado = num1 / num2;
        else {
            printf("Error: división entre cero.\n");
            return 1;
        }
    } else {
        printf("Operador no válido.\n");
        return 1;
    }

    printf("Resultado: %.2lf\n", resultado);
    return 0;
}

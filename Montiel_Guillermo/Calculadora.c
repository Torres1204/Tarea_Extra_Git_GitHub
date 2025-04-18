//Calculadora en C que permite sumar, restar, multiplicar y dividir
#include <stdio.h>

int opcion;
float num1, num2, resultado;

//Funcion que selecciona y realiza la operación deseada
int operador(opcion) {
    switch (opcion) {
        case 1: //Sumar
            resultado = num1 + num2;
            printf("El resultado de %.2f + %.2f es: %.2f\n", num1, num2, resultado);
            break;
        case 2: //Restar
            resultado = num1 - num2;
            printf("El resultado de %.2f - %.2f es: %.2f\n", num1, num2, resultado);
            break;
        case 3: //Multiplicar
            resultado = num1 * num2;
            printf("El resultado de %.2f * %.2f es: %.2f\n", num1, num2, resultado);
            break;
        case 4: //Dividir
            if (num2 == 0) { //Caso donde el segundo número es cero
                printf("Indeterminado\n");
            } else {
                resultado = num1 / num2;
                printf("El resultado de %.2f / %.2f es: %.2f\n", num1, num2, resultado);
            }
            break;
        default:
            printf("Opcion no valida.\n");
    }
}


int main() {

    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);

    printf("Selecciona la operación (escribe el número): \n");
    printf("1. Sumar (+)\n");
    printf("2. Restar (-)\n");
    printf("3. Multiplicar (*)\n");
    printf("4. Dividir (/)\n");
    printf("Opcion: ");
    scanf("%d", &opcion);   

    operador(opcion);

    return 0;
}
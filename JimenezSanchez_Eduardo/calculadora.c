#include <stdio.h>

float suma(float num1,float num2){
    return num1+num2;
}

float resta(float num1, float num2){
    return num1-num2;
}

float multiplicacion(float num1, float num2){
    return num1*num2;
}

float division(float num1, float num2){
    if (num2 != 0){
        return num1/num2;
    } else{
        printf("Lo siento, no se puede dividir entre cero\n");
        return 0;
    }
}

int main(){
    float num1, num2, resultado;
    int opcion;

    printf("Calculadora\n");
    printf("1- Suma\n");
    printf("2- Resta\n");
    printf("3- Multiplicacion\n");
    printf("4- Division\n");

    printf("Selecciona una opcion (1-4):");
    scanf("%d", &opcion);

    printf("Ingresa el primer numero:");
    scanf("%f", &num1);
    printf("Ingresa el segundo numero:");
    scanf("%f", &num2);

    switch (opcion)
    {
    case 1:
        resultado = suma(num1, num2);
        printf("Resultado: %.2f\n", resultado);
        break;

    case 2:
        resultado = resta(num1, num2);
        printf("Resultado: %.2f\n", resultado);
        break;

    case 3:
        resultado = multiplicacion(num1, num2);
        printf("Resultado: %.2f\n", resultado);
        break;

    case 4:
        resultado = division(num1, num2);
        if (num2 != 0){
            printf("Resultado: %.2f\n", resultado);
        }
        break;
    
    default:
        printf("Opcion no valida.");
    }
    
    return 0;

}
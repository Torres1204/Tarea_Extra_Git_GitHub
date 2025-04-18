
# include <stdio.h>

int main(int argc, char const *argv[])
{
    int opcion;
    float num1, num2, resultado;


    printf("---------------------------------- \n");
    printf("|     Ingresa una opcion:        | \n");
    printf("|1. Suma           | 2. Resta    | \n");
    printf("|3. Multiplicacion | 4. Division | \n");
    printf("---------------------------------- \n");

    scanf("%d", &opcion);

    printf("Ingresa el primer número: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo número: ");
    scanf("%f", &num2);

    switch (opcion)
    {
    case 1:
        resultado = num1 + num2;
        printf("El resultado de la suma es:  %.2f", resultado);
        break;

    case 2:
        resultado = num1 - num2;
        printf("El resultado de la resta es:  %.2f", resultado);
        break;   
        
    case 3:
        resultado = num1 * num2;
        printf("El resultado de la multiplicacion es:  %.2f", resultado);
        break;

    case 4:
    if (num2 != 0) {
        resultado = num1 / num2;
        printf("Resultado: %.2f\n", resultado);
    } else {
        printf("Error: División entre cero\n");
    }   
        break;
        
    
    default:
        printf("No se ingreso una opcion valida");
        break;
    }


    printf("\n :) \n");


    return 0;
}

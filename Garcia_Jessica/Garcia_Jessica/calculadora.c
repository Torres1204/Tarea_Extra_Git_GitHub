#include <stdio.h>
//Jessica Stephanie Garcia Monjaraz
int main(){

//que operacion desea
char operation;
printf("Bienvenidx a la calculadora\n\n");
printf("ESta calculadora básica puede realizar las siguientes operaciones:\n");
printf("+ Sumar\n");
printf("- Restar\n");
printf("* Multiplicar\n");
printf("/ Dividir\n\n");
printf("Por favor, ingrese el caracter en función de la operacion que desea calcular: ");
scanf("%s", &operation);

float num1, num2;
printf("\nIngresa el primer número: ");
scanf("%f", &num1);
printf("Ingresa el segundo número: ");
scanf("%f", &num2);

//selecciona la operacion
if (operation == '+'){
    printf("\nLa suma es: %.2f\n", num1 + num2);
}
else if (operation == '-')
{
printf("\nLa resta es: %.2f\n", num1 - num2);
}
else if (operation == '*')
{
    printf("\nLa multiplicación es: %.2f\n", num1 * num2);
}
else if (operation == '/')
{
    if (num2 != 0) {
        printf("\nLa división es: %.2f\n", num1 / num2);
    } else {
        printf("\nError: División por cero no permitida.\n");
    }
}
else {
    printf("\nLa operación no es válida\n");
    return 1;
}

}
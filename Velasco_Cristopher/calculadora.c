#include<stdio.h>

float var1,var2;
int opcion;

int main(){
    printf("Bienvenido, escriba un par de numeros:\n");
    scanf("%f",&var1);
    scanf("%f",&var2);
    printf("Selecione una opcion:\n1.-Suma\n2.-Resta\n3.-Multiplicacion\n4.-División\n\n");
    scanf("%d",&opcion);

    switch (opcion) {
    case 1:
        printf("%f + %f = %f",var1, var2, var1 + var2);
        break;

    case 2:
        printf("%f - %f = %f",var1, var2, var1 - var2);
        break;

    case 3:
        printf("%f * %f = %f",var1, var2, var1 * var2);
        break;

    default:
        printf("%f / %f = %f",var1, var2, var1 / var2);
        break;
    }
}


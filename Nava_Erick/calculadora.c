#include<stdio.h>

int main(){

    int op = 0 ;
    float a = 0, b = 0 ;
    printf("Seleccione que desea hacer:\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Division\n");
    printf("4.Multiplicacion\n");


    do{
        printf("Introduzca una opcion: ");
        scanf("%d",&op);
    }while (op>5 || op<0);

    printf("Ingresa el primer numero: ");
    scanf("%f", &a );
    printf("\nIngresa el segundo numero: ");
    scanf("%f",&b);
    
    switch(op){
        case 1:
            printf("Resultado: %.2f", a+b);
            break;
        case 2:
            printf("Resultado: %.2f", a-b);
            break;
        case 3:
            printf("Resultado: %.2f", a/b);
            break;
        case 4:
            printf("Resultado: %.2f\n", a*b);
        default:
            printf("caso no encotrado");
    }
    




    return 0;
}
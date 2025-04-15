#include<stdio.h>
#include<stdbool.h>

float resultado(float numA, char operador, float numB){
    float result;
    if( operador == '+'){
        result = numA+numB;
    } else if (operador == '-'){
        result = numA-numB;
    } else if (operador == '*'){
        result = numA*numB;
    } else if ( operador == '/'){
        if ( numB == 0 ){
            printf("No se puede dividir entre cero\n");
            result = 0;
        } else {
            result = numA/numB;
        }
    } else {
        printf("Operador inválido\n");
    }

    return result;
}

int main(){
    bool continuar=true;
    char answer;

    do{
    printf("Hola, esta es una calculadora básica\n");
    float numA;
    float numB;
    char operador;
    float result;

    printf("Introduzca un número: "); 
    scanf(" %f", &numA);
    
    printf("Operador de acuerdo a la operación que desea realizar (+, -, *, / ): ");
    scanf(" %c", &operador);

    printf("Introduzca un número: "); 
    scanf(" %f", &numB);

    result = resultado(numA, operador, numB);
    printf("Resultado de la operación: %.2f\n", result);

    printf("¿Quieres hacer otra operación? (s/N)");
    scanf(" %c", &answer);

    if(answer == 'N' || answer == 'n'){
        continuar = false;
        printf("Te vemos luego :) \n");
    }

    } while (continuar);

    return 0;
}
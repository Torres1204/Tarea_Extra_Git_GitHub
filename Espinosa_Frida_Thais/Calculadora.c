/******************************************************************************
                                Tarea Extra
*******************************************************************************/
#include <stdio.h>

int Calculadora() {
    int primerNumero;
    int segundoNumero;
    int opcionUser;
    float resultado;
    
    printf("----------------- Calculadora ----------------- \n ");
    do { //Se crea un bucle infinito
        printf( "1. Suma\n");
        printf( "2. Resta \n");
        printf( "3. Multiplicacion \n");
        printf( "4. Division \n");
        scanf("%d", &opcionUser);
        printf("-----------------\n");
    
        if (opcionUser > 4 || opcionUser < 1) {
        
          printf("-----------------\n");
            printf("Nopos, tu selección está fuera del rango, por fa vuelve a intentar\n");
              printf("-----------------\n");
        }
        
        printf("Vale, seleccionaste ");
        printf("%d", opcionUser);
        printf(", así que empecemos\n");
        printf("-----------------\n");
        
        do{ //Se crea un bucle que solo se ejecuta una vez
        printf("Introduce el primer numero: \n");
        scanf("%d", &primerNumero);
        } while(0);
        
        do{
        printf("-----------------\n");
        printf("Introduce el segundo numero: \n");
        printf("-----------------\n");
        scanf("%d", &segundoNumero);
        printf("-----------------\n");
        if (segundoNumero == 0){
             printf("Wupsi, no puedes dividir entre cero, intenta de nuez\n");
              continue; 
        }
        break;
        } while(1);
        switch(opcionUser) {
            case 1:
                resultado = (primerNumero+segundoNumero);
                printf("El resultado de la operación: %d + %d = %.2f\n", primerNumero, segundoNumero, resultado);
                break;
            
            case 2:
                resultado = (primerNumero-segundoNumero);
                printf("El resultado de la operación: %d - %d = %.2f\n", primerNumero, segundoNumero, resultado);
                break;
            
            case 3:
                resultado = (primerNumero*segundoNumero);
                printf("El resultado de la operación: %d * %d = %.2f\n", primerNumero, segundoNumero, resultado);
                break;
        
           case 4:
                if(segundoNumero == 0) {
                    printf("Wupsi, no puedes dividir entre cero, intenta de nuez\n");
                } else {
                    resultado = (float)primerNumero / segundoNumero;
                    printf("El resultado de la operación: %d / %d = %.2f\n", primerNumero, segundoNumero, resultado);
                }
                break;
        }
        
    } while(1);
    
    return 0;
    }

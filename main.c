#include <stdio.h>
#include <stdlib.h>
#include "tp1.h"
#include <conio.h>

int main()
{
    int opcion=0,num1=0,num2=0,resultSuma,resultResta,resultMultiplica,resultDivide,resultFactnum1,resultFactnum2;


    do{
        system("cls");

        printf("\n** MENU **");
        printf("\n1. Ingrese el primer operando: (A = %d)",num1);
        printf("\n2. Ingrese el segundo operando: (B = %d)",num2);
        printf("\n3. Calcular todas las operaciones. ");
        printf("\n4. Informar resultados.");
        printf("\n5. Salir.");
        printf("\n\n* Seleccione la opcion deseada:");
        scanf("%d",&opcion);

        switch(opcion){
        case 1:
            printf("Ingrese el primer operando: ");
            scanf("%d",&num1);
            break;
        case 2:
            printf("Ingrese el segundo operando: ");
            scanf("%d",&num2);
            break;
        case 3:
            resultSuma = suma(num1,num2);
            resultResta = resta(num1,num2);
            resultMultiplica = multiplica(num1,num2);
            resultDivide = divide(num1,num2);
            resultFactnum1 = factorialOp1(num1);
            resultFactnum2 = factorialOp2(num2);
            break;

        case 4:
            printf("\na) El resultado de A + B es: %d", resultSuma);
            printf("\na) El resultado de A - B es: %d", resultResta);
            if(num2 == 0){
                printf("\nc) No es posible dividir por 0");
            }
            else{
                printf("\nc) El resultado de A / B es: %d", resultDivide);
            }
            printf("\nd) El resultado de A * B es: %d", resultMultiplica);
            printf("\ne) El resultado de A! es: %d, y el de B! es: %d", resultFactnum1, resultFactnum2);
            opcion = getche();
            break;
        }

       }while(opcion!=5);

}

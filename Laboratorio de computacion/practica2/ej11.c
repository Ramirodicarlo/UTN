#include <stdio.h>
#include <stdlib.h>

void main(){
    double num1=0,num2=0,resultado=0;
    int menu=0;

    printf("Ingrese un numero.\n");
    scanf("%d",&num1);
    printf("Otro un numero.\n");
    scanf("%d",&num2);
    printf("1.Resta.\n2.Suma.\n3.Multiplicacion.\n4.Division.\n5.Exit.\n Seleccione una opcion.\n");
    scanf("%i",&menu);
    switch (menu)
    {
        case 1:
            resultado= num1-num2;
            printf("El resultado es: %d",resultado);
            break;
        case 2:
            resultado= num1+num2;
            printf("El resultado es: %d",resultado);
            break;
        case 3:
            resultado= num1*num2;
            printf("El resultado es: %d",resultado);
            break;
        case 4:
            resultado= num1/num2;
            printf("El resultado es: %d",resultado);
            break;
        case 5:
            break;
        default:
            printf("Numero incorrecto.");
            break;
    }
}
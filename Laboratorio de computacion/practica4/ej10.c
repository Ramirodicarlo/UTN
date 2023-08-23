#include <stdio.h>
#include <stdlib.h>

void main(){
    double num1=0,num2=0,resultado=0,operaciones=0;
    int menu=0;
    do
    {
        printf("Ingrese un numero.\n");
        scanf("%d",&num1);
        printf("Otro un numero.\n");
        scanf("%d",&num2);
        printf("1.Resta.\n2.Suma.\n3.Multiplicacion.\n4.Division.\n5.total operaciones.\n6- Salir.\nSeleccione una opcion.\n");
        scanf("%i",&menu);
        switch (menu)
        {
            case 1:
                resultado= num1-num2;
                printf("El resultado es: %d",resultado);
                operaciones=operaciones+1;
                break;
            case 2:
                resultado= num1+num2;
                printf("El resultado es: %d",resultado);
                operaciones=operaciones+1;
                break;
            case 3:
                resultado= num1*num2;
                printf("El resultado es: %d",resultado);
                operaciones=operaciones+1;
                break;
            case 4:
                resultado= num1/num2;
                printf("El resultado es: %d",resultado);
                operaciones=operaciones+1;
                break;
            case 5:
                printf("Total de operaciones realizadas:%i",operaciones);
            case 6:
                break;
            default:
                printf("Numero incorrecto.");
                break;
        }
    }while (menu!=6);
}
#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1=0,paridad=0;
    printf("Ingrese un numero.\n");
    scanf("%i",&num1);
    paridad = num1%2;
    if (0 == paridad)
        printf("%i es par.\n",num1);
    else
        printf("%i es impar.\n",num1);
}